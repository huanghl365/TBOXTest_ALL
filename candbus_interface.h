/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp com.qt.yeedon.can.xml -p candbus_interface
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CANDBUS_INTERFACE_H_1534406039
#define CANDBUS_INTERFACE_H_1534406039

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.qt.yeedon.can
 */
class ComQtYeedonCanInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.qt.yeedon.can"; }

public:
    ComQtYeedonCanInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ComQtYeedonCanInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> canwrite(int id, int value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id) << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QLatin1String("canwrite"), argumentList);
    }

    inline QDBusPendingReply<> wakeUp()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("wakeUp"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void broadTest(int value);
    void broadcastAbsFault(int value);
    void broadcastAcPowerOutput(int value);
    void broadcastAccOff();
    void broadcastAppointmentStateOfCharge(int value);
    void broadcastBatteryPackSocLowRank(int value);
    void broadcastBatteryPackVoltageFault(int value);
    void broadcastChargerPowerLineConnectStatus(int value);
    void broadcastChargerSystemFaultStatus(int value);
    void broadcastChargingStatus(int value);
    void broadcastDisconnectChargerRemind(int value);
    void broadcastElectronicBreakFaultStatus(int value);
    void broadcastEpsFaultStatus(int value);
    void broadcastEstimateRemainningDistance(int value);
    void broadcastGearState(int value);
    void broadcastHighVoltageIsolationFaultStatus(int value);
    void broadcastMotorFaultStatus(int value);
    void broadcastMotorOverTemperatureStatus(int value);
    void broadcastMotorPowerOutput(int value);
    void broadcastPowerBatteryDisconnect(int value);
    void broadcastPowerBatteryFaultStatus(int value);
    void broadcastSimArray03(int value);
    void broadcastSimArray12(int value);
    void broadcastSimArray47(int value);
    void broadcastSimArray811(int value);
    void broadcastVcamFaultStatus(int value);
    void broadcastVehicleAveragePower(int value);
    void broadcastVehicleInstantaneousPower(int value);
    void broadcastVinArray03(int value);
    void broadcastVinArray1215(int value);
    void broadcastVinArray16(int value);
    void broadcastVinArray47(int value);
    void broadcastVinArray811(int value);
};

namespace com {
  namespace qt {
    namespace yeedon {
      typedef ::ComQtYeedonCanInterface can;
    }
  }
}
#endif
