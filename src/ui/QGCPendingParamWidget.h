#ifndef QGCPENDINGPARAMWIDGET_H
#define QGCPENDINGPARAMWIDGET_H


#include "QGCParamWidget.h"

class QGCPendingParamWidget : public QGCParamWidget
{
    Q_OBJECT

public:
    explicit QGCPendingParamWidget(QObject* parent);
    virtual void init(); ///< Two-stage construction: initialize the object

protected:
    virtual void connectSignalsAndSlots();



signals:
    
public slots:
    virtual void handlePendingParamUpdate(int compId, const QString& paramName, QVariant value, bool isPending);

};

#endif // QGCPENDINGPARAMWIDGET_H