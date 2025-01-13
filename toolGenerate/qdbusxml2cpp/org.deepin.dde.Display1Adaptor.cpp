/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-launchpad/src/ddeintegration/xml/org.deepin.dde.Display1.xml -a ./dde-launchpad/toolGenerate/qdbusxml2cpp/org.deepin.dde.Display1Adaptor -i ./dde-launchpad/toolGenerate/qdbusxml2cpp/org.deepin.dde.Display1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-launchpad/toolGenerate/qdbusxml2cpp/org.deepin.dde.Display1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Display1Adaptor
 */

Display1Adaptor::Display1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Display1Adaptor::~Display1Adaptor()
{
    // destructor
}

int Display1Adaptor::colorTemperatureManual() const
{
    // get the value of property ColorTemperatureManual
    return qvariant_cast< int >(parent()->property("ColorTemperatureManual"));
}

int Display1Adaptor::colorTemperatureMode() const
{
    // get the value of property ColorTemperatureMode
    return qvariant_cast< int >(parent()->property("ColorTemperatureMode"));
}

QString Display1Adaptor::currentCustomId() const
{
    // get the value of property CurrentCustomId
    return qvariant_cast< QString >(parent()->property("CurrentCustomId"));
}

QStringList Display1Adaptor::customIdList() const
{
    // get the value of property CustomIdList
    return qvariant_cast< QStringList >(parent()->property("CustomIdList"));
}

uchar Display1Adaptor::displayMode() const
{
    // get the value of property DisplayMode
    return qvariant_cast< uchar >(parent()->property("DisplayMode"));
}

bool Display1Adaptor::hasChanged() const
{
    // get the value of property HasChanged
    return qvariant_cast< bool >(parent()->property("HasChanged"));
}

uint Display1Adaptor::maxBacklightBrightness() const
{
    // get the value of property MaxBacklightBrightness
    return qvariant_cast< uint >(parent()->property("MaxBacklightBrightness"));
}

QList<QDBusObjectPath> Display1Adaptor::monitors() const
{
    // get the value of property Monitors
    return qvariant_cast< QList<QDBusObjectPath> >(parent()->property("Monitors"));
}

QString Display1Adaptor::primary() const
{
    // get the value of property Primary
    return qvariant_cast< QString >(parent()->property("Primary"));
}

QRect Display1Adaptor::primaryRect() const
{
    // get the value of property PrimaryRect
    return qvariant_cast< QRect >(parent()->property("PrimaryRect"));
}

ushort Display1Adaptor::screenHeight() const
{
    // get the value of property ScreenHeight
    return qvariant_cast< ushort >(parent()->property("ScreenHeight"));
}

ushort Display1Adaptor::screenWidth() const
{
    // get the value of property ScreenWidth
    return qvariant_cast< ushort >(parent()->property("ScreenWidth"));
}

void Display1Adaptor::ApplyChanges()
{
    // handle method call org.deepin.dde.Display1.ApplyChanges
    QMetaObject::invokeMethod(parent(), "ApplyChanges");
}

void Display1Adaptor::AssociateTouch(const QString &in0, const QString &in1)
{
    // handle method call org.deepin.dde.Display1.AssociateTouch
    QMetaObject::invokeMethod(parent(), "AssociateTouch", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

void Display1Adaptor::AssociateTouchByUUID(const QString &in0, const QString &in1)
{
    // handle method call org.deepin.dde.Display1.AssociateTouchByUUID
    QMetaObject::invokeMethod(parent(), "AssociateTouchByUUID", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

void Display1Adaptor::ChangeBrightness(bool in0)
{
    // handle method call org.deepin.dde.Display1.ChangeBrightness
    QMetaObject::invokeMethod(parent(), "ChangeBrightness", Q_ARG(bool, in0));
}

void Display1Adaptor::DeleteCustomMode(const QString &in0)
{
    // handle method call org.deepin.dde.Display1.DeleteCustomMode
    QMetaObject::invokeMethod(parent(), "DeleteCustomMode", Q_ARG(QString, in0));
}

uchar Display1Adaptor::GetRealDisplayMode()
{
    // handle method call org.deepin.dde.Display1.GetRealDisplayMode
    uchar out0;
    QMetaObject::invokeMethod(parent(), "GetRealDisplayMode", Q_RETURN_ARG(uchar, out0));
    return out0;
}

QStringList Display1Adaptor::ListOutputNames()
{
    // handle method call org.deepin.dde.Display1.ListOutputNames
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "ListOutputNames", Q_RETURN_ARG(QStringList, out0));
    return out0;
}

void Display1Adaptor::ModifyConfigName(const QString &in0, const QString &in1)
{
    // handle method call org.deepin.dde.Display1.ModifyConfigName
    QMetaObject::invokeMethod(parent(), "ModifyConfigName", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

void Display1Adaptor::RefreshBrightness()
{
    // handle method call org.deepin.dde.Display1.RefreshBrightness
    QMetaObject::invokeMethod(parent(), "RefreshBrightness");
}

void Display1Adaptor::Reset()
{
    // handle method call org.deepin.dde.Display1.Reset
    QMetaObject::invokeMethod(parent(), "Reset");
}

void Display1Adaptor::ResetChanges()
{
    // handle method call org.deepin.dde.Display1.ResetChanges
    QMetaObject::invokeMethod(parent(), "ResetChanges");
}

void Display1Adaptor::Save()
{
    // handle method call org.deepin.dde.Display1.Save
    QMetaObject::invokeMethod(parent(), "Save");
}

void Display1Adaptor::SetAndSaveBrightness(const QString &in0, double in1)
{
    // handle method call org.deepin.dde.Display1.SetAndSaveBrightness
    QMetaObject::invokeMethod(parent(), "SetAndSaveBrightness", Q_ARG(QString, in0), Q_ARG(double, in1));
}

void Display1Adaptor::SetBrightness(const QString &in0, double in1)
{
    // handle method call org.deepin.dde.Display1.SetBrightness
    QMetaObject::invokeMethod(parent(), "SetBrightness", Q_ARG(QString, in0), Q_ARG(double, in1));
}

void Display1Adaptor::SetColorTemperature(int in0)
{
    // handle method call org.deepin.dde.Display1.SetColorTemperature
    QMetaObject::invokeMethod(parent(), "SetColorTemperature", Q_ARG(int, in0));
}

void Display1Adaptor::SetMethodAdjustCCT(int in0)
{
    // handle method call org.deepin.dde.Display1.SetMethodAdjustCCT
    QMetaObject::invokeMethod(parent(), "SetMethodAdjustCCT", Q_ARG(int, in0));
}

void Display1Adaptor::SetPrimary(const QString &in0)
{
    // handle method call org.deepin.dde.Display1.SetPrimary
    QMetaObject::invokeMethod(parent(), "SetPrimary", Q_ARG(QString, in0));
}

void Display1Adaptor::SwitchMode(uchar in0, const QString &in1)
{
    // handle method call org.deepin.dde.Display1.SwitchMode
    QMetaObject::invokeMethod(parent(), "SwitchMode", Q_ARG(uchar, in0), Q_ARG(QString, in1));
}

