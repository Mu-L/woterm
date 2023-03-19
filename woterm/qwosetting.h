﻿/*******************************************************************************************
*
* Copyright (C) 2022 Guangzhou AoYiDuo Network Technology Co.,Ltd. All Rights Reserved.
*
* Contact: http://www.aoyiduo.com
*
*   this file is used under the terms of the GPLv3[GNU GENERAL PUBLIC LICENSE v3]
* more information follow the website: https://www.gnu.org/licenses/gpl-3.0.en.html
*
*******************************************************************************************/

#ifndef QWOSETTING_H
#define QWOSETTING_H

#include "qkxsetting.h"

#include <QVariant>
#include <QDate>

class QWoSetting : public QKxSetting
{
    Q_OBJECT
public:
    explicit QWoSetting(QObject *parent = nullptr);
    static QString ftpTaskPath();
    static QString identityFilePath();
    static QString historyFilePath();
    static QString examplePath();
    static QString privateDataPath();
    static QString privateJsCorePath();
    static QString privateColorSchemaPath();
    static QString privateKeyboardLayoutPath();
    static QString privateTranslationPath();
    static QString sshServerFilePath();
    static QString lastJsLoadPath();
    static void setLastJsLoadPath(const QString& path);
    static QMap<QString, QString> allLanguages();
    Q_INVOKABLE static QString languageFile();
    Q_INVOKABLE static QStringList allLanguageNames();
    Q_INVOKABLE static QString languagePath(const QString& name);
    Q_INVOKABLE static QString languageName(const QString& path);
    Q_INVOKABLE static void setLanguageFile(const QString& path);

    static QString sshServerDbPath();
    static QString sftpTaskDbPath();
    static QString sftpTaskLogPath();
    static QString tempPath();
    static QString fontBackupPath();

    Q_INVOKABLE static QString downloadPath();
    Q_INVOKABLE static void setDownloadPath(const QString& path);
    Q_INVOKABLE static QString lastBackupPath();
    Q_INVOKABLE static void setLastBackupPath(const QString& path);

    /* upgrade */
    static bool shouldPopupUpgradeUltimate();
    static void setIgnoreTodayUpgradeUltimate();
    static bool shouldPopupUpgradeVersionMessage(const QString& ver);
    static void setNextUpgradeVersionDate(const QString& ver, const QDate &dt);
    static void setIgnoreTodayUpgradeVersion(const QString& ver);
    static void setSkipThisVersion(const QString& ver);

    static bool isListModel(const QString& where);
    static void setListModel(const QString& where, bool isList);

    static QString adminPassword();
    static void setAdminPassword(const QString& pass);

    static bool startupByAdmin();
    static void setStartupByAdmin(bool on);

    static bool lookupPasswordByAdmin();
    static void setLookupPasswordByAdmin(bool on);

    static QVariantMap localShell();
    static void setLocalShell(const QVariantMap& dm);

    static QVariantMap serialPort();
    static void setSerialPort(const QVariantMap& dm);

    static QVariantMap rdpDefault();
    static void setRdpDefault(const QVariantMap& dm);

    static QVariantMap vncDefault();
    static void setVncDefault(const QVariantMap& dm);

    static QVariantMap ttyDefault();
    static void setTtyDefault(const QVariantMap& dm);
};

#endif
