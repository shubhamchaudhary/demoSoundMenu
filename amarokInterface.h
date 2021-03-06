/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp amarokMediaPlayer2.xml -p amarokInterface
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef AMAROKINTERFACE_H_1366826930
#define AMAROKINTERFACE_H_1366826930

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.DBus.Introspectable
 */
class OrgFreedesktopDBusIntrospectableInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.DBus.Introspectable"; }

public:
    OrgFreedesktopDBusIntrospectableInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopDBusIntrospectableInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> Introspect()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Introspect"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

/*
 * Proxy class for interface org.freedesktop.DBus.Properties
 */
class OrgFreedesktopDBusPropertiesInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.DBus.Properties"; }

public:
    OrgFreedesktopDBusPropertiesInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopDBusPropertiesInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusVariant> Get(const QString &interface_name, const QString &property_name)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(interface_name) << QVariant::fromValue(property_name);
        return asyncCallWithArgumentList(QLatin1String("Get"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetAll(const QString &interface_name)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(interface_name);
        return asyncCallWithArgumentList(QLatin1String("GetAll"), argumentList);
    }

    inline QDBusPendingReply<> Set(const QString &interface_name, const QString &property_name, const QDBusVariant &value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(interface_name) << QVariant::fromValue(property_name) << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QLatin1String("Set"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

/*
 * Proxy class for interface org.kde.amarok.App
 */
class OrgKdeAmarokAppInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.kde.amarok.App"; }

public:
    OrgKdeAmarokAppInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgKdeAmarokAppInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> LoadThemeFile(const QString &path)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(path);
        return asyncCallWithArgumentList(QLatin1String("LoadThemeFile"), argumentList);
    }

    inline QDBusPendingReply<> ShowOSD()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ShowOSD"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

/*
 * Proxy class for interface org.kde.amarok.Mpris2Extensions.Player
 */
class OrgKdeAmarokMpris2ExtensionsPlayerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.kde.amarok.Mpris2Extensions.Player"; }

public:
    OrgKdeAmarokMpris2ExtensionsPlayerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgKdeAmarokMpris2ExtensionsPlayerInterface();

    Q_PROPERTY(bool Muted READ muted WRITE setMuted)
    inline bool muted() const
    { return qvariant_cast< bool >(property("Muted")); }
    inline void setMuted(bool value)
    { setProperty("Muted", QVariant::fromValue(value)); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> AdjustVolume(double IncreaseBy)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(IncreaseBy);
        return asyncCallWithArgumentList(QLatin1String("AdjustVolume"), argumentList);
    }

    inline QDBusPendingReply<> StopAfterCurrent()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("StopAfterCurrent"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

/*
 * Proxy class for interface org.mpris.MediaPlayer2
 */
class OrgMprisMediaPlayer2Interface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.mpris.MediaPlayer2"; }

public:
    OrgMprisMediaPlayer2Interface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgMprisMediaPlayer2Interface();

    Q_PROPERTY(bool CanQuit READ canQuit)
    inline bool canQuit() const
    { return qvariant_cast< bool >(property("CanQuit")); }

    Q_PROPERTY(bool CanRaise READ canRaise)
    inline bool canRaise() const
    { return qvariant_cast< bool >(property("CanRaise")); }

    Q_PROPERTY(bool CanSetFullscreen READ canSetFullscreen)
    inline bool canSetFullscreen() const
    { return qvariant_cast< bool >(property("CanSetFullscreen")); }

    Q_PROPERTY(QString DesktopEntry READ desktopEntry)
    inline QString desktopEntry() const
    { return qvariant_cast< QString >(property("DesktopEntry")); }

    Q_PROPERTY(bool Fullscreen READ fullscreen)
    inline bool fullscreen() const
    { return qvariant_cast< bool >(property("Fullscreen")); }

    Q_PROPERTY(bool HasTrackList READ hasTrackList)
    inline bool hasTrackList() const
    { return qvariant_cast< bool >(property("HasTrackList")); }

    Q_PROPERTY(QString Identity READ identity)
    inline QString identity() const
    { return qvariant_cast< QString >(property("Identity")); }

    Q_PROPERTY(QStringList SupportedMimeTypes READ supportedMimeTypes)
    inline QStringList supportedMimeTypes() const
    { return qvariant_cast< QStringList >(property("SupportedMimeTypes")); }

    Q_PROPERTY(QStringList SupportedUriSchemes READ supportedUriSchemes)
    inline QStringList supportedUriSchemes() const
    { return qvariant_cast< QStringList >(property("SupportedUriSchemes")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Quit()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Quit"), argumentList);
    }

    inline QDBusPendingReply<> Raise()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Raise"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

/*
 * Proxy class for interface org.mpris.MediaPlayer2.Player
 */
class OrgMprisMediaPlayer2PlayerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.mpris.MediaPlayer2.Player"; }

public:
    OrgMprisMediaPlayer2PlayerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgMprisMediaPlayer2PlayerInterface();

    Q_PROPERTY(bool CanControl READ canControl)
    inline bool canControl() const
    { return qvariant_cast< bool >(property("CanControl")); }

    Q_PROPERTY(bool CanGoNext READ canGoNext)
    inline bool canGoNext() const
    { return qvariant_cast< bool >(property("CanGoNext")); }

    Q_PROPERTY(bool CanGoPrevious READ canGoPrevious)
    inline bool canGoPrevious() const
    { return qvariant_cast< bool >(property("CanGoPrevious")); }

    Q_PROPERTY(bool CanPause READ canPause)
    inline bool canPause() const
    { return qvariant_cast< bool >(property("CanPause")); }

    Q_PROPERTY(bool CanPlay READ canPlay)
    inline bool canPlay() const
    { return qvariant_cast< bool >(property("CanPlay")); }

    Q_PROPERTY(bool CanSeek READ canSeek)
    inline bool canSeek() const
    { return qvariant_cast< bool >(property("CanSeek")); }

    Q_PROPERTY(QString LoopStatus READ loopStatus WRITE setLoopStatus)
    inline QString loopStatus() const
    { return qvariant_cast< QString >(property("LoopStatus")); }
    inline void setLoopStatus(const QString &value)
    { setProperty("LoopStatus", QVariant::fromValue(value)); }

    Q_PROPERTY(double MaximumRate READ maximumRate)
    inline double maximumRate() const
    { return qvariant_cast< double >(property("MaximumRate")); }

    Q_PROPERTY(QVariantMap Metadata READ metadata)
    inline QVariantMap metadata() const
    { return qvariant_cast< QVariantMap >(property("Metadata")); }

    Q_PROPERTY(double MinimumRate READ minimumRate)
    inline double minimumRate() const
    { return qvariant_cast< double >(property("MinimumRate")); }

    Q_PROPERTY(QString PlaybackStatus READ playbackStatus)
    inline QString playbackStatus() const
    { return qvariant_cast< QString >(property("PlaybackStatus")); }

    Q_PROPERTY(qlonglong Position READ position)
    inline qlonglong position() const
    { return qvariant_cast< qlonglong >(property("Position")); }

    Q_PROPERTY(double Rate READ rate WRITE setRate)
    inline double rate() const
    { return qvariant_cast< double >(property("Rate")); }
    inline void setRate(double value)
    { setProperty("Rate", QVariant::fromValue(value)); }

    Q_PROPERTY(bool Shuffle READ shuffle WRITE setShuffle)
    inline bool shuffle() const
    { return qvariant_cast< bool >(property("Shuffle")); }
    inline void setShuffle(bool value)
    { setProperty("Shuffle", QVariant::fromValue(value)); }

    Q_PROPERTY(double Volume READ volume WRITE setVolume)
    inline double volume() const
    { return qvariant_cast< double >(property("Volume")); }
    inline void setVolume(double value)
    { setProperty("Volume", QVariant::fromValue(value)); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Next()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Next"), argumentList);
    }

    inline QDBusPendingReply<> OpenUri(const QString &Uri)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(Uri);
        return asyncCallWithArgumentList(QLatin1String("OpenUri"), argumentList);
    }

    inline QDBusPendingReply<> Pause()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Pause"), argumentList);
    }

    inline QDBusPendingReply<> Play()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Play"), argumentList);
    }

    inline QDBusPendingReply<> PlayPause()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("PlayPause"), argumentList);
    }

    inline QDBusPendingReply<> Previous()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Previous"), argumentList);
    }

    inline QDBusPendingReply<> Seek(qlonglong Offset)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(Offset);
        return asyncCallWithArgumentList(QLatin1String("Seek"), argumentList);
    }

    inline QDBusPendingReply<> SetPosition(const QDBusObjectPath &TrackId, qlonglong Position)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(TrackId) << QVariant::fromValue(Position);
        return asyncCallWithArgumentList(QLatin1String("SetPosition"), argumentList);
    }

    inline QDBusPendingReply<> Stop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Stop"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Seeked(qlonglong Position);
};

namespace org {
  namespace freedesktop {
    namespace DBus {
      typedef ::OrgFreedesktopDBusIntrospectableInterface Introspectable;
      typedef ::OrgFreedesktopDBusPropertiesInterface Properties;
    }
  }
  namespace kde {
    namespace amarok {
      typedef ::OrgKdeAmarokAppInterface App;
      namespace Mpris2Extensions {
        typedef ::OrgKdeAmarokMpris2ExtensionsPlayerInterface Player;
      }
    }
  }
  namespace mpris {
    //typedef ::OrgMprisMediaPlayer2Interface MediaPlayer2;
    namespace MediaPlayer2 {
      typedef ::OrgMprisMediaPlayer2PlayerInterface Player;
    }
  }
}
#endif
