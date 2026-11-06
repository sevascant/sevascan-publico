/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[69];
    char stringdata0[929];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitcoinGUI"
QT_MOC_LITERAL(1, 11, 11), // "receivedURI"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "uri"
QT_MOC_LITERAL(4, 28, 12), // "consoleShown"
QT_MOC_LITERAL(5, 41, 11), // "RPCConsole*"
QT_MOC_LITERAL(6, 53, 7), // "console"
QT_MOC_LITERAL(7, 61, 10), // "setPrivacy"
QT_MOC_LITERAL(8, 72, 7), // "privacy"
QT_MOC_LITERAL(9, 80, 17), // "setNumConnections"
QT_MOC_LITERAL(10, 98, 5), // "count"
QT_MOC_LITERAL(11, 104, 16), // "setNetworkActive"
QT_MOC_LITERAL(12, 121, 13), // "networkActive"
QT_MOC_LITERAL(13, 135, 12), // "setNumBlocks"
QT_MOC_LITERAL(14, 148, 9), // "blockDate"
QT_MOC_LITERAL(15, 158, 21), // "nVerificationProgress"
QT_MOC_LITERAL(16, 180, 7), // "headers"
QT_MOC_LITERAL(17, 188, 20), // "SynchronizationState"
QT_MOC_LITERAL(18, 209, 10), // "sync_state"
QT_MOC_LITERAL(19, 220, 7), // "message"
QT_MOC_LITERAL(20, 228, 5), // "title"
QT_MOC_LITERAL(21, 234, 5), // "style"
QT_MOC_LITERAL(22, 240, 5), // "bool*"
QT_MOC_LITERAL(23, 246, 3), // "ret"
QT_MOC_LITERAL(24, 250, 16), // "detailed_message"
QT_MOC_LITERAL(25, 267, 16), // "setCurrentWallet"
QT_MOC_LITERAL(26, 284, 12), // "WalletModel*"
QT_MOC_LITERAL(27, 297, 12), // "wallet_model"
QT_MOC_LITERAL(28, 310, 31), // "setCurrentWalletBySelectorIndex"
QT_MOC_LITERAL(29, 342, 5), // "index"
QT_MOC_LITERAL(30, 348, 18), // "updateWalletStatus"
QT_MOC_LITERAL(31, 367, 20), // "handlePaymentRequest"
QT_MOC_LITERAL(32, 388, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(33, 407, 9), // "recipient"
QT_MOC_LITERAL(34, 417, 19), // "incomingTransaction"
QT_MOC_LITERAL(35, 437, 4), // "date"
QT_MOC_LITERAL(36, 442, 4), // "unit"
QT_MOC_LITERAL(37, 447, 7), // "CAmount"
QT_MOC_LITERAL(38, 455, 6), // "amount"
QT_MOC_LITERAL(39, 462, 4), // "type"
QT_MOC_LITERAL(40, 467, 7), // "address"
QT_MOC_LITERAL(41, 475, 5), // "label"
QT_MOC_LITERAL(42, 481, 10), // "walletName"
QT_MOC_LITERAL(43, 492, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(44, 509, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(45, 525, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(46, 546, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(47, 564, 4), // "addr"
QT_MOC_LITERAL(48, 569, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(49, 588, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(50, 609, 12), // "gotoLoadPSBT"
QT_MOC_LITERAL(51, 622, 14), // "from_clipboard"
QT_MOC_LITERAL(52, 637, 11), // "openClicked"
QT_MOC_LITERAL(53, 649, 14), // "optionsClicked"
QT_MOC_LITERAL(54, 664, 12), // "aboutClicked"
QT_MOC_LITERAL(55, 677, 15), // "showDebugWindow"
QT_MOC_LITERAL(56, 693, 30), // "showDebugWindowActivateConsole"
QT_MOC_LITERAL(57, 724, 22), // "showHelpMessageClicked"
QT_MOC_LITERAL(58, 747, 17), // "trayIconActivated"
QT_MOC_LITERAL(59, 765, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(60, 799, 6), // "reason"
QT_MOC_LITERAL(61, 806, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(62, 828, 13), // "fToggleHidden"
QT_MOC_LITERAL(63, 842, 12), // "toggleHidden"
QT_MOC_LITERAL(64, 855, 14), // "detectShutdown"
QT_MOC_LITERAL(65, 870, 12), // "showProgress"
QT_MOC_LITERAL(66, 883, 9), // "nProgress"
QT_MOC_LITERAL(67, 893, 18), // "setTrayIconVisible"
QT_MOC_LITERAL(68, 912, 16) // "showModalOverlay"

    },
    "BitcoinGUI\0receivedURI\0\0uri\0consoleShown\0"
    "RPCConsole*\0console\0setPrivacy\0privacy\0"
    "setNumConnections\0count\0setNetworkActive\0"
    "networkActive\0setNumBlocks\0blockDate\0"
    "nVerificationProgress\0headers\0"
    "SynchronizationState\0sync_state\0message\0"
    "title\0style\0bool*\0ret\0detailed_message\0"
    "setCurrentWallet\0WalletModel*\0"
    "wallet_model\0setCurrentWalletBySelectorIndex\0"
    "index\0updateWalletStatus\0handlePaymentRequest\0"
    "SendCoinsRecipient\0recipient\0"
    "incomingTransaction\0date\0unit\0CAmount\0"
    "amount\0type\0address\0label\0walletName\0"
    "gotoOverviewPage\0gotoHistoryPage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "addr\0gotoSignMessageTab\0gotoVerifyMessageTab\0"
    "gotoLoadPSBT\0from_clipboard\0openClicked\0"
    "optionsClicked\0aboutClicked\0showDebugWindow\0"
    "showDebugWindowActivateConsole\0"
    "showHelpMessageClicked\0trayIconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0showNormalIfMinimized\0fToggleHidden\0"
    "toggleHidden\0detectShutdown\0showProgress\0"
    "nProgress\0setTrayIconVisible\0"
    "showModalOverlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x06 /* Public */,
       4,    1,  212,    2, 0x06 /* Public */,
       7,    1,  215,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  218,    2, 0x0a /* Public */,
      11,    1,  221,    2, 0x0a /* Public */,
      13,    5,  224,    2, 0x0a /* Public */,
      19,    5,  235,    2, 0x0a /* Public */,
      19,    4,  246,    2, 0x2a /* Public | MethodCloned */,
      19,    3,  255,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  262,    2, 0x0a /* Public */,
      28,    1,  265,    2, 0x0a /* Public */,
      30,    0,  268,    2, 0x0a /* Public */,
      31,    1,  269,    2, 0x0a /* Public */,
      34,    7,  272,    2, 0x0a /* Public */,
      43,    0,  287,    2, 0x0a /* Public */,
      44,    0,  288,    2, 0x0a /* Public */,
      45,    0,  289,    2, 0x0a /* Public */,
      46,    1,  290,    2, 0x0a /* Public */,
      46,    0,  293,    2, 0x2a /* Public | MethodCloned */,
      48,    1,  294,    2, 0x0a /* Public */,
      48,    0,  297,    2, 0x2a /* Public | MethodCloned */,
      49,    1,  298,    2, 0x0a /* Public */,
      49,    0,  301,    2, 0x2a /* Public | MethodCloned */,
      50,    1,  302,    2, 0x0a /* Public */,
      50,    0,  305,    2, 0x2a /* Public | MethodCloned */,
      52,    0,  306,    2, 0x0a /* Public */,
      53,    0,  307,    2, 0x0a /* Public */,
      54,    0,  308,    2, 0x0a /* Public */,
      55,    0,  309,    2, 0x0a /* Public */,
      56,    0,  310,    2, 0x0a /* Public */,
      57,    0,  311,    2, 0x0a /* Public */,
      58,    1,  312,    2, 0x0a /* Public */,
      61,    0,  315,    2, 0x0a /* Public */,
      61,    1,  316,    2, 0x0a /* Public */,
      63,    0,  319,    2, 0x0a /* Public */,
      64,    0,  320,    2, 0x0a /* Public */,
      65,    2,  321,    2, 0x0a /* Public */,
      67,    1,  326,    2, 0x0a /* Public */,
      68,    0,  329,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double, QMetaType::Bool, 0x80000000 | 17,   10,   14,   15,   16,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 22, QMetaType::QString,   20,   19,   21,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 22,   20,   19,   21,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   20,   19,   21,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 37, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   35,   36,   38,   39,   40,   41,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59,   60,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   20,   66,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedURI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->consoleShown((*reinterpret_cast< RPCConsole*(*)>(_a[1]))); break;
        case 2: _t->setPrivacy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setNetworkActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< SynchronizationState(*)>(_a[5]))); break;
        case 6: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 7: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 8: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 9: _t->setCurrentWallet((*reinterpret_cast< WalletModel*(*)>(_a[1]))); break;
        case 10: _t->setCurrentWalletBySelectorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateWalletStatus(); break;
        case 12: { bool _r = _t->handlePaymentRequest((*reinterpret_cast< const SendCoinsRecipient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 14: _t->gotoOverviewPage(); break;
        case 15: _t->gotoHistoryPage(); break;
        case 16: _t->gotoReceiveCoinsPage(); break;
        case 17: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->gotoSendCoinsPage(); break;
        case 19: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->gotoSignMessageTab(); break;
        case 21: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->gotoVerifyMessageTab(); break;
        case 23: _t->gotoLoadPSBT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->gotoLoadPSBT(); break;
        case 25: _t->openClicked(); break;
        case 26: _t->optionsClicked(); break;
        case 27: _t->aboutClicked(); break;
        case 28: _t->showDebugWindow(); break;
        case 29: _t->showDebugWindowActivateConsole(); break;
        case 30: _t->showHelpMessageClicked(); break;
        case 31: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 32: _t->showNormalIfMinimized(); break;
        case 33: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->toggleHidden(); break;
        case 35: _t->detectShutdown(); break;
        case 36: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->setTrayIconVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->showModalOverlay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BitcoinGUI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinGUI::receivedURI)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BitcoinGUI::*_t)(RPCConsole * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinGUI::consoleShown)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BitcoinGUI::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinGUI::setPrivacy)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI.data,
      qt_meta_data_BitcoinGUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void BitcoinGUI::receivedURI(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BitcoinGUI::consoleShown(RPCConsole * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BitcoinGUI::setPrivacy(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_UnitDisplayStatusBarControl_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitDisplayStatusBarControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitDisplayStatusBarControl_t qt_meta_stringdata_UnitDisplayStatusBarControl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "UnitDisplayStatusBarControl"
QT_MOC_LITERAL(1, 28, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "newUnits"
QT_MOC_LITERAL(4, 56, 15), // "onMenuSelection"
QT_MOC_LITERAL(5, 72, 8), // "QAction*"
QT_MOC_LITERAL(6, 81, 6) // "action"

    },
    "UnitDisplayStatusBarControl\0"
    "updateDisplayUnit\0\0newUnits\0onMenuSelection\0"
    "QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitDisplayStatusBarControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void UnitDisplayStatusBarControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UnitDisplayStatusBarControl *_t = static_cast<UnitDisplayStatusBarControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDisplayUnit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onMenuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject UnitDisplayStatusBarControl::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_UnitDisplayStatusBarControl.data,
      qt_meta_data_UnitDisplayStatusBarControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UnitDisplayStatusBarControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitDisplayStatusBarControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UnitDisplayStatusBarControl.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int UnitDisplayStatusBarControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
