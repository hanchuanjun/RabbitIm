#ifndef FRMREGISTER_H
#define FRMREGISTER_H

#include <QFrame>
#include "Client/Client.h"

namespace Ui {
class CFrmRegister;
}

class CFrmRegister : public QFrame
{
    Q_OBJECT

public:
    explicit CFrmRegister(QWidget *parent = 0);
    ~CFrmRegister();

    int SetLogin(QWidget *pLogin);

protected:
    virtual void hideEvent(QHideEvent *);
    virtual void changeEvent(QEvent*);

private slots:
    void connected();
    void clientError(CClient::ERROR_TYPE e);
    //void clientIqReceived(const QXmppIq &iq);
    void on_pbCreate_clicked();
    void on_pbCancel_clicked();

private:
    Ui::CFrmRegister *ui;
    QWidget *m_pLogin;
};

#endif // FRMREGISTER_H
