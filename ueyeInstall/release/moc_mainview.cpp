/****************************************************************************
** Meta object code from reading C++ file 'mainview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Mainview[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      24,   18,    9,    9, 0x0a,
      43,    9,    9,    9, 0x0a,
      58,    9,    9,    9, 0x0a,
      77,    9,    9,    9, 0x0a,
      97,    9,   93,    9, 0x0a,
     112,    9,    9,    9, 0x0a,
     126,    9,    9,    9, 0x0a,
     135,    9,    9,    9, 0x0a,
     148,    9,    9,    9, 0x0a,
     162,    9,    9,    9, 0x0a,
     176,    9,    9,    9, 0x0a,
     199,  192,    9,    9, 0x0a,
     225,  192,    9,    9, 0x0a,
     251,    9,    9,    9, 0x0a,
     276,    9,    9,    9, 0x0a,
     291,    9,    9,    9, 0x0a,
     306,    9,    9,    9, 0x0a,
     318,    9,    9,    9, 0x0a,
     337,    9,    9,    9, 0x0a,
     351,    9,    9,    9, 0x0a,
     371,    9,    9,    9, 0x0a,
     392,    9,    9,    9, 0x08,
     412,    9,    9,    9, 0x08,
     433,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Mainview[] = {
    "Mainview\0\0about()\0event\0eventreceived(int)\0"
    "onOpenCamera()\0onOpenCameraLive()\0"
    "onCloseCamera()\0int\0SetupCapture()\0"
    "SetupTitles()\0onLive()\0onSnapshot()\0"
    "onSaveImage()\0onLoadImage()\0onResetCamera()\0"
    "action\0onLoadParameter(QAction*)\0"
    "onSaveParameter(QAction*)\0"
    "onPrepareLoadParameter()\0onProperties()\0"
    "onUseTrigger()\0onDisplay()\0"
    "onApiErrorReport()\0onImageInfo()\0"
    "onImageInfoUpdate()\0onLimitDisplayRate()\0"
    "workThreadStarted()\0workThreadFinished()\0"
    "updateProgress()\0"
};

void Mainview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Mainview *_t = static_cast<Mainview *>(_o);
        switch (_id) {
        case 0: _t->about(); break;
        case 1: _t->eventreceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onOpenCamera(); break;
        case 3: _t->onOpenCameraLive(); break;
        case 4: _t->onCloseCamera(); break;
        case 5: { int _r = _t->SetupCapture();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->SetupTitles(); break;
        case 7: _t->onLive(); break;
        case 8: _t->onSnapshot(); break;
        case 9: _t->onSaveImage(); break;
        case 10: _t->onLoadImage(); break;
        case 11: _t->onResetCamera(); break;
        case 12: _t->onLoadParameter((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: _t->onSaveParameter((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 14: _t->onPrepareLoadParameter(); break;
        case 15: _t->onProperties(); break;
        case 16: _t->onUseTrigger(); break;
        case 17: _t->onDisplay(); break;
        case 18: _t->onApiErrorReport(); break;
        case 19: _t->onImageInfo(); break;
        case 20: _t->onImageInfoUpdate(); break;
        case 21: _t->onLimitDisplayRate(); break;
        case 22: _t->workThreadStarted(); break;
        case 23: _t->workThreadFinished(); break;
        case 24: _t->updateProgress(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Mainview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Mainview::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Mainview,
      qt_meta_data_Mainview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Mainview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Mainview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Mainview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mainview))
        return static_cast<void*>(const_cast< Mainview*>(this));
    if (!strcmp(_clname, "Ui::MainviewClass"))
        return static_cast< Ui::MainviewClass*>(const_cast< Mainview*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Mainview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
static const uint qt_meta_data_WorkerThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_WorkerThread[] = {
    "WorkerThread\0"
};

void WorkerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WorkerThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WorkerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WorkerThread,
      qt_meta_data_WorkerThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WorkerThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WorkerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WorkerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WorkerThread))
        return static_cast<void*>(const_cast< WorkerThread*>(this));
    return QThread::qt_metacast(_clname);
}

int WorkerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
