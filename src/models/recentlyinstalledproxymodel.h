// SPDX-FileCopyrightText: 2024 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include <QtQml/qqml.h>
#include <QSortFilterProxyModel>
#include <QQmlParserStatus>

class RecentlyInstalledProxyModel : public QSortFilterProxyModel, public QQmlParserStatus
{
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)
    QML_NAMED_ELEMENT(RecentlyInstalledProxyModel)
    QML_SINGLETON
public:
    static RecentlyInstalledProxyModel &instance()
    {
        static RecentlyInstalledProxyModel _instance;
        return _instance;
    }

    static RecentlyInstalledProxyModel *create(QQmlEngine *qmlEngine, QJSEngine *jsEngine)
    {
        Q_UNUSED(qmlEngine)
        Q_UNUSED(jsEngine)
        return &instance();
    }

    // QSortFilterProxyModel interface
protected:
    bool filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const override;
    bool lessThan(const QModelIndex &source_left, const QModelIndex &source_right) const override;

private:
    explicit RecentlyInstalledProxyModel(QObject *parent = nullptr);

    // QQmlParserStatus interface
public:
    void classBegin() override {}
    void componentComplete() override;
};
