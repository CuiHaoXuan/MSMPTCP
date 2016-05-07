/****************************************************************************
** Meta object code from reading C++ file 'qcustomplot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qcustomplot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcustomplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCPScatterStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      16, 0x0,   18,   18,

 // enum data: key, value
      29, uint(QCPScatterStyle::ssNone),
      36, uint(QCPScatterStyle::ssDot),
      42, uint(QCPScatterStyle::ssCross),
      50, uint(QCPScatterStyle::ssPlus),
      57, uint(QCPScatterStyle::ssCircle),
      66, uint(QCPScatterStyle::ssDisc),
      73, uint(QCPScatterStyle::ssSquare),
      82, uint(QCPScatterStyle::ssDiamond),
      92, uint(QCPScatterStyle::ssStar),
      99, uint(QCPScatterStyle::ssTriangle),
     110, uint(QCPScatterStyle::ssTriangleInverted),
     129, uint(QCPScatterStyle::ssCrossSquare),
     143, uint(QCPScatterStyle::ssPlusSquare),
     156, uint(QCPScatterStyle::ssCrossCircle),
     170, uint(QCPScatterStyle::ssPlusCircle),
     183, uint(QCPScatterStyle::ssPeace),
     191, uint(QCPScatterStyle::ssPixmap),
     200, uint(QCPScatterStyle::ssCustom),

       0        // eod
};

static const char qt_meta_stringdata_QCPScatterStyle[] = {
    "QCPScatterStyle\0ScatterShape\0ssNone\0"
    "ssDot\0ssCross\0ssPlus\0ssCircle\0ssDisc\0"
    "ssSquare\0ssDiamond\0ssStar\0ssTriangle\0"
    "ssTriangleInverted\0ssCrossSquare\0"
    "ssPlusSquare\0ssCrossCircle\0ssPlusCircle\0"
    "ssPeace\0ssPixmap\0ssCustom\0"
};

const QMetaObject QCPScatterStyle::staticMetaObject = {
    { 0, qt_meta_stringdata_QCPScatterStyle,
      qt_meta_data_QCPScatterStyle, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPScatterStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION
static const uint qt_meta_data_QCPPainter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      11, 0x1,    4,   22,
      23, 0x1,    4,   30,

 // enum data: key, value
      36, uint(QCPPainter::pmDefault),
      46, uint(QCPPainter::pmVectorized),
      59, uint(QCPPainter::pmNoCaching),
      71, uint(QCPPainter::pmNonCosmetic),
      36, uint(QCPPainter::pmDefault),
      46, uint(QCPPainter::pmVectorized),
      59, uint(QCPPainter::pmNoCaching),
      71, uint(QCPPainter::pmNonCosmetic),

       0        // eod
};

static const char qt_meta_stringdata_QCPPainter[] = {
    "QCPPainter\0PainterMode\0PainterModes\0"
    "pmDefault\0pmVectorized\0pmNoCaching\0"
    "pmNonCosmetic\0"
};

const QMetaObject QCPPainter::staticMetaObject = {
    { &QPainter::staticMetaObject, qt_meta_stringdata_QCPPainter,
      qt_meta_data_QCPPainter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPPainter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION
static const uint qt_meta_data_QCPLayer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       9,   20, 0x00095009,
      33,   38, 0x0a095001,
      46,   52, 0x02095001,
      56,   65, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_QCPLayer[] = {
    "QCPLayer\0parentPlot\0QCustomPlot*\0name\0"
    "QString\0index\0int\0children\0"
    "QList<QCPLayerable*>\0"
};

void QCPLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPLayer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPLayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCPLayer,
      qt_meta_data_QCPLayer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPLayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayer))
        return static_cast<void*>(const_cast< QCPLayer*>(this));
    return QObject::qt_metacast(_clname);
}

int QCPLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCustomPlot**>(_v) = parentPlot(); break;
        case 1: *reinterpret_cast< QString*>(_v) = name(); break;
        case 2: *reinterpret_cast< int*>(_v) = index(); break;
        case 3: *reinterpret_cast< QList<QCPLayerable*>*>(_v) = children(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPLayerable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      13,   21, 0x01095103,
      26,   37, 0x00095009,
      50,   66, 0x00095009,
      80,   86, 0x0009510b,
      96,   21, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPLayerable[] = {
    "QCPLayerable\0visible\0bool\0parentPlot\0"
    "QCustomPlot*\0parentLayerable\0QCPLayerable*\0"
    "layer\0QCPLayer*\0antialiased\0"
};

void QCPLayerable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPLayerable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPLayerable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCPLayerable,
      qt_meta_data_QCPLayerable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPLayerable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPLayerable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPLayerable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayerable))
        return static_cast<void*>(const_cast< QCPLayerable*>(this));
    return QObject::qt_metacast(_clname);
}

int QCPLayerable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = visible(); break;
        case 1: *reinterpret_cast< QCustomPlot**>(_v) = parentPlot(); break;
        case 2: *reinterpret_cast< QCPLayerable**>(_v) = parentLayerable(); break;
        case 3: *reinterpret_cast< QCPLayer**>(_v) = layer(); break;
        case 4: *reinterpret_cast< bool*>(_v) = antialiased(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: setLayer(*reinterpret_cast< QCPLayer**>(_v)); break;
        case 4: setAntialiased(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPMarginGroup[] = {

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

static const char qt_meta_stringdata_QCPMarginGroup[] = {
    "QCPMarginGroup\0"
};

void QCPMarginGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPMarginGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPMarginGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCPMarginGroup,
      qt_meta_data_QCPMarginGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPMarginGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPMarginGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPMarginGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPMarginGroup))
        return static_cast<void*>(const_cast< QCPMarginGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int QCPMarginGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCPLayoutElement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      17,   24, 0x00095009,
      35,   40, 0x13095001,
      46,   40, 0x13095103,
      56,   64, 0x0009510b,
      73,   64, 0x0009510b,
      88,  100, 0x15095103,
     106,  100, 0x15095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPLayoutElement[] = {
    "QCPLayoutElement\0layout\0QCPLayout*\0"
    "rect\0QRect\0outerRect\0margins\0QMargins\0"
    "minimumMargins\0minimumSize\0QSize\0"
    "maximumSize\0"
};

void QCPLayoutElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPLayoutElement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPLayoutElement::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPLayoutElement,
      qt_meta_data_QCPLayoutElement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPLayoutElement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPLayoutElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPLayoutElement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayoutElement))
        return static_cast<void*>(const_cast< QCPLayoutElement*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPLayoutElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPLayout**>(_v) = layout(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = rect(); break;
        case 2: *reinterpret_cast< QRect*>(_v) = outerRect(); break;
        case 3: *reinterpret_cast< QMargins*>(_v) = margins(); break;
        case 4: *reinterpret_cast< QMargins*>(_v) = minimumMargins(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = minimumSize(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = maximumSize(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setOuterRect(*reinterpret_cast< QRect*>(_v)); break;
        case 3: setMargins(*reinterpret_cast< QMargins*>(_v)); break;
        case 4: setMinimumMargins(*reinterpret_cast< QMargins*>(_v)); break;
        case 5: setMinimumSize(*reinterpret_cast< QSize*>(_v)); break;
        case 6: setMaximumSize(*reinterpret_cast< QSize*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPLayout[] = {

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

static const char qt_meta_stringdata_QCPLayout[] = {
    "QCPLayout\0"
};

void QCPLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPLayout::staticMetaObject = {
    { &QCPLayoutElement::staticMetaObject, qt_meta_stringdata_QCPLayout,
      qt_meta_data_QCPLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayout))
        return static_cast<void*>(const_cast< QCPLayout*>(this));
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCPLayoutGrid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      14,   23, 0x02095001,
      27,   23, 0x02095001,
      39,   60, 0x0009510b,
      74,   60, 0x0009510b,
      92,   23, 0x02095103,
     106,   23, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPLayoutGrid[] = {
    "QCPLayoutGrid\0rowCount\0int\0columnCount\0"
    "columnStretchFactors\0QList<double>\0"
    "rowStretchFactors\0columnSpacing\0"
    "rowSpacing\0"
};

void QCPLayoutGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPLayoutGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPLayoutGrid::staticMetaObject = {
    { &QCPLayout::staticMetaObject, qt_meta_stringdata_QCPLayoutGrid,
      qt_meta_data_QCPLayoutGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPLayoutGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPLayoutGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPLayoutGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayoutGrid))
        return static_cast<void*>(const_cast< QCPLayoutGrid*>(this));
    return QCPLayout::qt_metacast(_clname);
}

int QCPLayoutGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = rowCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = columnCount(); break;
        case 2: *reinterpret_cast< QList<double>*>(_v) = columnStretchFactors(); break;
        case 3: *reinterpret_cast< QList<double>*>(_v) = rowStretchFactors(); break;
        case 4: *reinterpret_cast< int*>(_v) = columnSpacing(); break;
        case 5: *reinterpret_cast< int*>(_v) = rowSpacing(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setColumnStretchFactors(*reinterpret_cast< QList<double>*>(_v)); break;
        case 3: setRowStretchFactors(*reinterpret_cast< QList<double>*>(_v)); break;
        case 4: setColumnSpacing(*reinterpret_cast< int*>(_v)); break;
        case 5: setRowSpacing(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPLayoutInset[] = {

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

static const char qt_meta_stringdata_QCPLayoutInset[] = {
    "QCPLayoutInset\0"
};

void QCPLayoutInset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPLayoutInset::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPLayoutInset::staticMetaObject = {
    { &QCPLayout::staticMetaObject, qt_meta_stringdata_QCPLayoutInset,
      qt_meta_data_QCPLayoutInset, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPLayoutInset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPLayoutInset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPLayoutInset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayoutInset))
        return static_cast<void*>(const_cast< QCPLayoutInset*>(this));
    return QCPLayout::qt_metacast(_clname);
}

int QCPLayoutInset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCPLineEnding[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      14, 0x0,   10,   18,

 // enum data: key, value
      26, uint(QCPLineEnding::esNone),
      33, uint(QCPLineEnding::esFlatArrow),
      45, uint(QCPLineEnding::esSpikeArrow),
      58, uint(QCPLineEnding::esLineArrow),
      70, uint(QCPLineEnding::esDisc),
      77, uint(QCPLineEnding::esSquare),
      86, uint(QCPLineEnding::esDiamond),
      96, uint(QCPLineEnding::esBar),
     102, uint(QCPLineEnding::esHalfBar),
     112, uint(QCPLineEnding::esSkewedBar),

       0        // eod
};

static const char qt_meta_stringdata_QCPLineEnding[] = {
    "QCPLineEnding\0EndingStyle\0esNone\0"
    "esFlatArrow\0esSpikeArrow\0esLineArrow\0"
    "esDisc\0esSquare\0esDiamond\0esBar\0"
    "esHalfBar\0esSkewedBar\0"
};

const QMetaObject QCPLineEnding::staticMetaObject = {
    { 0, qt_meta_stringdata_QCPLineEnding,
      qt_meta_data_QCPLineEnding, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPLineEnding::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION
static const uint qt_meta_data_QCPGrid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       8,   23, 0x01095103,
      28,   23, 0x01095103,
      47,   23, 0x01095103,
      67,   71, 0x4d095103,
      76,   71, 0x4d095103,
      87,   71, 0x4d095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPGrid[] = {
    "QCPGrid\0subGridVisible\0bool\0"
    "antialiasedSubGrid\0antialiasedZeroLine\0"
    "pen\0QPen\0subGridPen\0zeroLinePen\0"
};

void QCPGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPGrid::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPGrid,
      qt_meta_data_QCPGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPGrid))
        return static_cast<void*>(const_cast< QCPGrid*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = subGridVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = antialiasedSubGrid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = antialiasedZeroLine(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 4: *reinterpret_cast< QPen*>(_v) = subGridPen(); break;
        case 5: *reinterpret_cast< QPen*>(_v) = zeroLinePen(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSubGridVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: setAntialiasedSubGrid(*reinterpret_cast< bool*>(_v)); break;
        case 2: setAntialiasedZeroLine(*reinterpret_cast< bool*>(_v)); break;
        case 3: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: setSubGridPen(*reinterpret_cast< QPen*>(_v)); break;
        case 5: setZeroLinePen(*reinterpret_cast< QPen*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPAxis[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      51,   49, // properties
       6,  202, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,   23,   23,   23, 0x05,
      24,   47,   23,   23, 0x05,
      56,   88,   23,   23, 0x05,
     106,  149,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     155,  174,   23,   23, 0x0a,
     180,  225,   23,   23, 0x0a,
     241,  284,   23,   23, 0x0a,

 // properties: name, type, flags
     298,  307, 0x00095009,
     316,  325, 0x00095009,
     338,  348, 0x0009510b,
     358,  371, 0x06095103,
     174,  378, 0x0009510b,
     387,  401, 0x01095103,
     406,  401, 0x01095103,
     416,  430, 0x02095103,
     434,  401, 0x01095103,
     449,  401, 0x01095103,
     462,  401, 0x01095103,
     475,  401, 0x01095103,
     481,  401, 0x01095103,
     492,  430, 0x02095103,
     509,  523, 0x0009510b,
     533,  547, 0x40095103,
     553,  568, 0x43095103,
     575,  371, 0x06095103,
     593,  608, 0x0a095103,
     616,  629, 0x0009510b,
     642,  608, 0x0a095103,
     655,  430, 0x02095103,
     671,  371, 0x06095103,
     680,  691, 0x0009510b,
     707,  724, 0x0009510b,
     741,  430, 0x02095103,
     754,  430, 0x02095103,
     768,  430, 0x02095103,
     781,  430, 0x02095103,
     797,  430, 0x02095103,
     814,  822, 0x4d095103,
     827,  822, 0x4d095103,
     835,  822, 0x4d095103,
     846,  547, 0x40095103,
     856,  568, 0x43095103,
     867,  608, 0x0a095103,
     873,  430, 0x02095103,
     886,  430, 0x02095103,
     894,  430, 0x02095103,
     284,  901, 0x0009510b,
     225,  901, 0x0009510b,
     917,  547, 0x40095103,
     939,  547, 0x40095103,
     957,  568, 0x43095103,
     980,  568, 0x43095103,
     999,  822, 0x4d095103,
    1015,  822, 0x4d095103,
    1031,  822, 0x4d095103,
    1050, 1062, 0x0009510b,
    1076, 1062, 0x0009510b,
    1088, 1093, 0x00095009,

 // enums: name, flags, count, data
     307, 0x1,    4,  226,
    1102, 0x1,    4,  234,
     523, 0x0,    2,  242,
     348, 0x0,    2,  246,
    1112, 0x1,    4,  250,
     901, 0x1,    4,  258,

 // enum data: key, value
    1127, uint(QCPAxis::atLeft),
    1134, uint(QCPAxis::atRight),
    1142, uint(QCPAxis::atTop),
    1148, uint(QCPAxis::atBottom),
    1127, uint(QCPAxis::atLeft),
    1134, uint(QCPAxis::atRight),
    1142, uint(QCPAxis::atTop),
    1148, uint(QCPAxis::atBottom),
    1157, uint(QCPAxis::ltNumber),
    1166, uint(QCPAxis::ltDateTime),
    1177, uint(QCPAxis::stLinear),
    1186, uint(QCPAxis::stLogarithmic),
    1200, uint(QCPAxis::spNone),
    1207, uint(QCPAxis::spAxis),
    1214, uint(QCPAxis::spTickLabels),
    1227, uint(QCPAxis::spAxisLabel),
    1200, uint(QCPAxis::spNone),
    1207, uint(QCPAxis::spAxis),
    1214, uint(QCPAxis::spTickLabels),
    1227, uint(QCPAxis::spAxisLabel),

       0        // eod
};

static const char qt_meta_stringdata_QCPAxis[] = {
    "QCPAxis\0ticksRequest()\0\0rangeChanged(QCPRange)\0"
    "newRange\0rangeChanged(QCPRange,QCPRange)\0"
    "newRange,oldRange\0"
    "selectionChanged(QCPAxis::SelectableParts)\0"
    "parts\0setRange(QCPRange)\0range\0"
    "setSelectableParts(QCPAxis::SelectableParts)\0"
    "selectableParts\0"
    "setSelectedParts(QCPAxis::SelectableParts)\0"
    "selectedParts\0axisType\0AxisType\0"
    "axisRect\0QCPAxisRect*\0scaleType\0"
    "ScaleType\0scaleLogBase\0double\0QCPRange\0"
    "rangeReversed\0bool\0autoTicks\0autoTickCount\0"
    "int\0autoTickLabels\0autoTickStep\0"
    "autoSubTicks\0ticks\0tickLabels\0"
    "tickLabelPadding\0tickLabelType\0LabelType\0"
    "tickLabelFont\0QFont\0tickLabelColor\0"
    "QColor\0tickLabelRotation\0dateTimeFormat\0"
    "QString\0dateTimeSpec\0Qt::TimeSpec\0"
    "numberFormat\0numberPrecision\0tickStep\0"
    "tickVector\0QVector<double>\0tickVectorLabels\0"
    "QVector<QString>\0tickLengthIn\0"
    "tickLengthOut\0subTickCount\0subTickLengthIn\0"
    "subTickLengthOut\0basePen\0QPen\0tickPen\0"
    "subTickPen\0labelFont\0labelColor\0label\0"
    "labelPadding\0padding\0offset\0SelectableParts\0"
    "selectedTickLabelFont\0selectedLabelFont\0"
    "selectedTickLabelColor\0selectedLabelColor\0"
    "selectedBasePen\0selectedTickPen\0"
    "selectedSubTickPen\0lowerEnding\0"
    "QCPLineEnding\0upperEnding\0grid\0QCPGrid*\0"
    "AxisTypes\0SelectablePart\0atLeft\0atRight\0"
    "atTop\0atBottom\0ltNumber\0ltDateTime\0"
    "stLinear\0stLogarithmic\0spNone\0spAxis\0"
    "spTickLabels\0spAxisLabel\0"
};

void QCPAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCPAxis *_t = static_cast<QCPAxis *>(_o);
        switch (_id) {
        case 0: _t->ticksRequest(); break;
        case 1: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1])),(*reinterpret_cast< const QCPRange(*)>(_a[2]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 4: _t->setRange((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 5: _t->setSelectableParts((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 6: _t->setSelectedParts((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCPAxis::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPAxis::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPAxis,
      qt_meta_data_QCPAxis, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPAxis::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAxis))
        return static_cast<void*>(const_cast< QCPAxis*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(axisType()); break;
        case 1: *reinterpret_cast< QCPAxisRect**>(_v) = axisRect(); break;
        case 2: *reinterpret_cast< ScaleType*>(_v) = scaleType(); break;
        case 3: *reinterpret_cast< double*>(_v) = scaleLogBase(); break;
        case 4: *reinterpret_cast< QCPRange*>(_v) = range(); break;
        case 5: *reinterpret_cast< bool*>(_v) = rangeReversed(); break;
        case 6: *reinterpret_cast< bool*>(_v) = autoTicks(); break;
        case 7: *reinterpret_cast< int*>(_v) = autoTickCount(); break;
        case 8: *reinterpret_cast< bool*>(_v) = autoTickLabels(); break;
        case 9: *reinterpret_cast< bool*>(_v) = autoTickStep(); break;
        case 10: *reinterpret_cast< bool*>(_v) = autoSubTicks(); break;
        case 11: *reinterpret_cast< bool*>(_v) = ticks(); break;
        case 12: *reinterpret_cast< bool*>(_v) = tickLabels(); break;
        case 13: *reinterpret_cast< int*>(_v) = tickLabelPadding(); break;
        case 14: *reinterpret_cast< LabelType*>(_v) = tickLabelType(); break;
        case 15: *reinterpret_cast< QFont*>(_v) = tickLabelFont(); break;
        case 16: *reinterpret_cast< QColor*>(_v) = tickLabelColor(); break;
        case 17: *reinterpret_cast< double*>(_v) = tickLabelRotation(); break;
        case 18: *reinterpret_cast< QString*>(_v) = dateTimeFormat(); break;
        case 19: *reinterpret_cast< Qt::TimeSpec*>(_v) = dateTimeSpec(); break;
        case 20: *reinterpret_cast< QString*>(_v) = numberFormat(); break;
        case 21: *reinterpret_cast< int*>(_v) = numberPrecision(); break;
        case 22: *reinterpret_cast< double*>(_v) = tickStep(); break;
        case 23: *reinterpret_cast< QVector<double>*>(_v) = tickVector(); break;
        case 24: *reinterpret_cast< QVector<QString>*>(_v) = tickVectorLabels(); break;
        case 25: *reinterpret_cast< int*>(_v) = tickLengthIn(); break;
        case 26: *reinterpret_cast< int*>(_v) = tickLengthOut(); break;
        case 27: *reinterpret_cast< int*>(_v) = subTickCount(); break;
        case 28: *reinterpret_cast< int*>(_v) = subTickLengthIn(); break;
        case 29: *reinterpret_cast< int*>(_v) = subTickLengthOut(); break;
        case 30: *reinterpret_cast< QPen*>(_v) = basePen(); break;
        case 31: *reinterpret_cast< QPen*>(_v) = tickPen(); break;
        case 32: *reinterpret_cast< QPen*>(_v) = subTickPen(); break;
        case 33: *reinterpret_cast< QFont*>(_v) = labelFont(); break;
        case 34: *reinterpret_cast< QColor*>(_v) = labelColor(); break;
        case 35: *reinterpret_cast< QString*>(_v) = label(); break;
        case 36: *reinterpret_cast< int*>(_v) = labelPadding(); break;
        case 37: *reinterpret_cast< int*>(_v) = padding(); break;
        case 38: *reinterpret_cast< int*>(_v) = offset(); break;
        case 39: *reinterpret_cast<int*>(_v) = QFlag(selectedParts()); break;
        case 40: *reinterpret_cast<int*>(_v) = QFlag(selectableParts()); break;
        case 41: *reinterpret_cast< QFont*>(_v) = selectedTickLabelFont(); break;
        case 42: *reinterpret_cast< QFont*>(_v) = selectedLabelFont(); break;
        case 43: *reinterpret_cast< QColor*>(_v) = selectedTickLabelColor(); break;
        case 44: *reinterpret_cast< QColor*>(_v) = selectedLabelColor(); break;
        case 45: *reinterpret_cast< QPen*>(_v) = selectedBasePen(); break;
        case 46: *reinterpret_cast< QPen*>(_v) = selectedTickPen(); break;
        case 47: *reinterpret_cast< QPen*>(_v) = selectedSubTickPen(); break;
        case 48: *reinterpret_cast< QCPLineEnding*>(_v) = lowerEnding(); break;
        case 49: *reinterpret_cast< QCPLineEnding*>(_v) = upperEnding(); break;
        case 50: *reinterpret_cast< QCPGrid**>(_v) = grid(); break;
        }
        _id -= 51;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setScaleType(*reinterpret_cast< ScaleType*>(_v)); break;
        case 3: setScaleLogBase(*reinterpret_cast< double*>(_v)); break;
        case 4: setRange(*reinterpret_cast< QCPRange*>(_v)); break;
        case 5: setRangeReversed(*reinterpret_cast< bool*>(_v)); break;
        case 6: setAutoTicks(*reinterpret_cast< bool*>(_v)); break;
        case 7: setAutoTickCount(*reinterpret_cast< int*>(_v)); break;
        case 8: setAutoTickLabels(*reinterpret_cast< bool*>(_v)); break;
        case 9: setAutoTickStep(*reinterpret_cast< bool*>(_v)); break;
        case 10: setAutoSubTicks(*reinterpret_cast< bool*>(_v)); break;
        case 11: setTicks(*reinterpret_cast< bool*>(_v)); break;
        case 12: setTickLabels(*reinterpret_cast< bool*>(_v)); break;
        case 13: setTickLabelPadding(*reinterpret_cast< int*>(_v)); break;
        case 14: setTickLabelType(*reinterpret_cast< LabelType*>(_v)); break;
        case 15: setTickLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 16: setTickLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 17: setTickLabelRotation(*reinterpret_cast< double*>(_v)); break;
        case 18: setDateTimeFormat(*reinterpret_cast< QString*>(_v)); break;
        case 19: setDateTimeSpec(*reinterpret_cast< Qt::TimeSpec*>(_v)); break;
        case 20: setNumberFormat(*reinterpret_cast< QString*>(_v)); break;
        case 21: setNumberPrecision(*reinterpret_cast< int*>(_v)); break;
        case 22: setTickStep(*reinterpret_cast< double*>(_v)); break;
        case 23: setTickVector(*reinterpret_cast< QVector<double>*>(_v)); break;
        case 24: setTickVectorLabels(*reinterpret_cast< QVector<QString>*>(_v)); break;
        case 25: setTickLengthIn(*reinterpret_cast< int*>(_v)); break;
        case 26: setTickLengthOut(*reinterpret_cast< int*>(_v)); break;
        case 27: setSubTickCount(*reinterpret_cast< int*>(_v)); break;
        case 28: setSubTickLengthIn(*reinterpret_cast< int*>(_v)); break;
        case 29: setSubTickLengthOut(*reinterpret_cast< int*>(_v)); break;
        case 30: setBasePen(*reinterpret_cast< QPen*>(_v)); break;
        case 31: setTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 32: setSubTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 33: setLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 34: setLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 35: setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 36: setLabelPadding(*reinterpret_cast< int*>(_v)); break;
        case 37: setPadding(*reinterpret_cast< int*>(_v)); break;
        case 38: setOffset(*reinterpret_cast< int*>(_v)); break;
        case 39: setSelectedParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 40: setSelectableParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 41: setSelectedTickLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 42: setSelectedLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 43: setSelectedTickLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 44: setSelectedLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 45: setSelectedBasePen(*reinterpret_cast< QPen*>(_v)); break;
        case 46: setSelectedTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 47: setSelectedSubTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 48: setLowerEnding(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        case 49: setUpperEnding(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        }
        _id -= 51;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 51;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAxis::ticksRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QCPAxis::rangeChanged(const QCPRange & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPAxis::rangeChanged(const QCPRange & _t1, const QCPRange & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCPAxis::selectionChanged(const QCPAxis::SelectableParts & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_QCPAbstractPlottable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      12,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   44,   53,   53, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   74,   53,   53, 0x0a,
      85,   44,   53,   53, 0x0a,

 // properties: name, type, flags
     103,  108, 0x0a095103,
     116,  132, 0x01095103,
     137,  132, 0x01095103,
     157,  132, 0x01095103,
     178,  182, 0x4d095103,
     187,  182, 0x4d095103,
     199,  205, 0x42095103,
     212,  205, 0x42095103,
     226,  234, 0x0009510b,
     243,  234, 0x0009510b,
      74,  132, 0x01095103,
      44,  132, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPAbstractPlottable[] = {
    "QCPAbstractPlottable\0selectionChanged(bool)\0"
    "selected\0\0setSelectable(bool)\0selectable\0"
    "setSelected(bool)\0name\0QString\0"
    "antialiasedFill\0bool\0antialiasedScatters\0"
    "antialiasedErrorBars\0pen\0QPen\0selectedPen\0"
    "brush\0QBrush\0selectedBrush\0keyAxis\0"
    "QCPAxis*\0valueAxis\0"
};

void QCPAbstractPlottable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCPAbstractPlottable *_t = static_cast<QCPAbstractPlottable *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setSelectable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCPAbstractPlottable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPAbstractPlottable::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPAbstractPlottable,
      qt_meta_data_QCPAbstractPlottable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPAbstractPlottable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPAbstractPlottable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPAbstractPlottable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractPlottable))
        return static_cast<void*>(const_cast< QCPAbstractPlottable*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAbstractPlottable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = antialiasedFill(); break;
        case 2: *reinterpret_cast< bool*>(_v) = antialiasedScatters(); break;
        case 3: *reinterpret_cast< bool*>(_v) = antialiasedErrorBars(); break;
        case 4: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 5: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        case 6: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 7: *reinterpret_cast< QBrush*>(_v) = selectedBrush(); break;
        case 8: *reinterpret_cast< QCPAxis**>(_v) = keyAxis(); break;
        case 9: *reinterpret_cast< QCPAxis**>(_v) = valueAxis(); break;
        case 10: *reinterpret_cast< bool*>(_v) = selectable(); break;
        case 11: *reinterpret_cast< bool*>(_v) = selected(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setAntialiasedFill(*reinterpret_cast< bool*>(_v)); break;
        case 2: setAntialiasedScatters(*reinterpret_cast< bool*>(_v)); break;
        case 3: setAntialiasedErrorBars(*reinterpret_cast< bool*>(_v)); break;
        case 4: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 5: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 6: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 7: setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 8: setKeyAxis(*reinterpret_cast< QCPAxis**>(_v)); break;
        case 9: setValueAxis(*reinterpret_cast< QCPAxis**>(_v)); break;
        case 10: setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 11: setSelected(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAbstractPlottable::selectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QCPAbstractItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   39,   48,   48, 0x05,

 // properties: name, type, flags
      49,   64, 0x01095103,
      69,   82, 0x0009510b,
      95,   64, 0x01095103,
      39,   64, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPAbstractItem[] = {
    "QCPAbstractItem\0selectionChanged(bool)\0"
    "selected\0\0clipToAxisRect\0bool\0"
    "clipAxisRect\0QCPAxisRect*\0selectable\0"
};

void QCPAbstractItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCPAbstractItem *_t = static_cast<QCPAbstractItem *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCPAbstractItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPAbstractItem::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPAbstractItem,
      qt_meta_data_QCPAbstractItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPAbstractItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPAbstractItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPAbstractItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractItem))
        return static_cast<void*>(const_cast< QCPAbstractItem*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAbstractItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = clipToAxisRect(); break;
        case 1: *reinterpret_cast< QCPAxisRect**>(_v) = clipAxisRect(); break;
        case 2: *reinterpret_cast< bool*>(_v) = selectable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = selected(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setClipToAxisRect(*reinterpret_cast< bool*>(_v)); break;
        case 1: setClipAxisRect(*reinterpret_cast< QCPAxisRect**>(_v)); break;
        case 2: setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 3: setSelected(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAbstractItem::selectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QCustomPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       9,  124, // properties
       1,  151, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   43,   49,   49, 0x05,
      50,   43,   49,   49, 0x05,
      75,   43,   49,   49, 0x05,
      99,   43,   49,   49, 0x05,
     126,   43,   49,   49, 0x05,
     151,  202,   49,   49, 0x05,
     218,  202,   49,   49, 0x05,
     275,  316,   49,   49, 0x05,
     327,  316,   49,   49, 0x05,
     374,  431,   49,   49, 0x05,
     447,  431,   49,   49, 0x05,
     510,  570,   49,   49, 0x05,
     588,  570,   49,   49, 0x05,
     654,  693,   49,   49, 0x05,
     705,  693,   49,   49, 0x05,
     750,   49,   49,   49, 0x05,
     775,   49,   49,   49, 0x05,
     790,   49,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
     804,  822,   49,   49, 0x0a,
     844,   49,   49,   49, 0x2a,
     858,   49,   49,   49, 0x0a,
     872,   49,   49,   49, 0x0a,

 // properties: name, type, flags
     881,  890, 0x13095103,
     896,  907, 0x41095103,
     915,  932, 0x01095103,
     937,  958, 0x0009510b,
     978,  989, 0x00095009,
    1004,  932, 0x01095103,
    1029, 1048, 0x02095103,
    1052,  932, 0x01095103,
    1073, 1093, 0x0009510b,

 // enums: name, flags, count, data
    1114, 0x0,    2,  155,

 // enum data: key, value
    1130, uint(QCustomPlot::limBelow),
    1139, uint(QCustomPlot::limAbove),

       0        // eod
};

static const char qt_meta_stringdata_QCustomPlot[] = {
    "QCustomPlot\0mouseDoubleClick(QMouseEvent*)\0"
    "event\0\0mousePress(QMouseEvent*)\0"
    "mouseMove(QMouseEvent*)\0"
    "mouseRelease(QMouseEvent*)\0"
    "mouseWheel(QWheelEvent*)\0"
    "plottableClick(QCPAbstractPlottable*,QMouseEvent*)\0"
    "plottable,event\0"
    "plottableDoubleClick(QCPAbstractPlottable*,QMouseEvent*)\0"
    "itemClick(QCPAbstractItem*,QMouseEvent*)\0"
    "item,event\0itemDoubleClick(QCPAbstractItem*,QMouseEvent*)\0"
    "axisClick(QCPAxis*,QCPAxis::SelectablePart,QMouseEvent*)\0"
    "axis,part,event\0"
    "axisDoubleClick(QCPAxis*,QCPAxis::SelectablePart,QMouseEvent*)\0"
    "legendClick(QCPLegend*,QCPAbstractLegendItem*,QMouseEvent*)\0"
    "legend,item,event\0"
    "legendDoubleClick(QCPLegend*,QCPAbstractLegendItem*,QMouseEvent*)\0"
    "titleClick(QMouseEvent*,QCPPlotTitle*)\0"
    "event,title\0titleDoubleClick(QMouseEvent*,QCPPlotTitle*)\0"
    "selectionChangedByUser()\0beforeReplot()\0"
    "afterReplot()\0rescaleAxes(bool)\0"
    "onlyVisiblePlottables\0rescaleAxes()\0"
    "deselectAll()\0replot()\0viewport\0QRect\0"
    "background\0QPixmap\0backgroundScaled\0"
    "bool\0backgroundScaledMode\0Qt::AspectRatioMode\0"
    "plotLayout\0QCPLayoutGrid*\0"
    "autoAddPlottableToLegend\0selectionTolerance\0"
    "int\0noAntialiasingOnDrag\0multiSelectModifier\0"
    "Qt::KeyboardModifier\0LayerInsertMode\0"
    "limBelow\0limAbove\0"
};

void QCustomPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCustomPlot *_t = static_cast<QCustomPlot *>(_o);
        switch (_id) {
        case 0: _t->mouseDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseWheel((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 5: _t->plottableClick((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 6: _t->plottableDoubleClick((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 7: _t->itemClick((*reinterpret_cast< QCPAbstractItem*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 8: _t->itemDoubleClick((*reinterpret_cast< QCPAbstractItem*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 9: _t->axisClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 10: _t->axisDoubleClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 11: _t->legendClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 12: _t->legendDoubleClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 13: _t->titleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< QCPPlotTitle*(*)>(_a[2]))); break;
        case 14: _t->titleDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< QCPPlotTitle*(*)>(_a[2]))); break;
        case 15: _t->selectionChangedByUser(); break;
        case 16: _t->beforeReplot(); break;
        case 17: _t->afterReplot(); break;
        case 18: _t->rescaleAxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->rescaleAxes(); break;
        case 20: _t->deselectAll(); break;
        case 21: _t->replot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCustomPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCustomPlot::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCustomPlot,
      qt_meta_data_QCustomPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCustomPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCustomPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCustomPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCustomPlot))
        return static_cast<void*>(const_cast< QCustomPlot*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCustomPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = viewport(); break;
        case 1: *reinterpret_cast< QPixmap*>(_v) = background(); break;
        case 2: *reinterpret_cast< bool*>(_v) = backgroundScaled(); break;
        case 3: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = backgroundScaledMode(); break;
        case 4: *reinterpret_cast< QCPLayoutGrid**>(_v) = plotLayout(); break;
        case 5: *reinterpret_cast< bool*>(_v) = autoAddPlottableToLegend(); break;
        case 6: *reinterpret_cast< int*>(_v) = selectionTolerance(); break;
        case 7: *reinterpret_cast< bool*>(_v) = noAntialiasingOnDrag(); break;
        case 8: *reinterpret_cast< Qt::KeyboardModifier*>(_v) = multiSelectModifier(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setViewport(*reinterpret_cast< QRect*>(_v)); break;
        case 1: setBackground(*reinterpret_cast< QPixmap*>(_v)); break;
        case 2: setBackgroundScaled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setBackgroundScaledMode(*reinterpret_cast< Qt::AspectRatioMode*>(_v)); break;
        case 5: setAutoAddPlottableToLegend(*reinterpret_cast< bool*>(_v)); break;
        case 6: setSelectionTolerance(*reinterpret_cast< int*>(_v)); break;
        case 7: setNoAntialiasingOnDrag(*reinterpret_cast< bool*>(_v)); break;
        case 8: setMultiSelectModifier(*reinterpret_cast< Qt::KeyboardModifier*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCustomPlot::mouseDoubleClick(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCustomPlot::mousePress(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCustomPlot::mouseMove(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCustomPlot::mouseRelease(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCustomPlot::mouseWheel(QWheelEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCustomPlot::plottableClick(QCPAbstractPlottable * _t1, QMouseEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QCustomPlot::plottableDoubleClick(QCPAbstractPlottable * _t1, QMouseEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QCustomPlot::itemClick(QCPAbstractItem * _t1, QMouseEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QCustomPlot::itemDoubleClick(QCPAbstractItem * _t1, QMouseEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QCustomPlot::axisClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QCustomPlot::axisDoubleClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QCustomPlot::legendClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QCustomPlot::legendDoubleClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QCustomPlot::titleClick(QMouseEvent * _t1, QCPPlotTitle * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QCustomPlot::titleDoubleClick(QMouseEvent * _t1, QCPPlotTitle * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QCustomPlot::selectionChangedByUser()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void QCustomPlot::beforeReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void QCustomPlot::afterReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}
static const uint qt_meta_data_QCPGraph[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       2,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       9,   19, 0x0009510b,
      29,   42, 0x0009510b,
      58,   68, 0x0009510b,
      78,   87, 0x4d095103,
      92,  105, 0x06095103,
     112,  131, 0x01095103,
     136,  153, 0x0009510b,

 // enums: name, flags, count, data
      19, 0x0,    6,   43,
      68, 0x0,    4,   55,

 // enum data: key, value
     163, uint(QCPGraph::lsNone),
     170, uint(QCPGraph::lsLine),
     177, uint(QCPGraph::lsStepLeft),
     188, uint(QCPGraph::lsStepRight),
     200, uint(QCPGraph::lsStepCenter),
     213, uint(QCPGraph::lsImpulse),
     223, uint(QCPGraph::etNone),
     230, uint(QCPGraph::etKey),
     236, uint(QCPGraph::etValue),
     244, uint(QCPGraph::etBoth),

       0        // eod
};

static const char qt_meta_stringdata_QCPGraph[] = {
    "QCPGraph\0lineStyle\0LineStyle\0scatterStyle\0"
    "QCPScatterStyle\0errorType\0ErrorType\0"
    "errorPen\0QPen\0errorBarSize\0double\0"
    "errorBarSkipSymbol\0bool\0channelFillGraph\0"
    "QCPGraph*\0lsNone\0lsLine\0lsStepLeft\0"
    "lsStepRight\0lsStepCenter\0lsImpulse\0"
    "etNone\0etKey\0etValue\0etBoth\0"
};

void QCPGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPGraph::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPGraph::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPGraph,
      qt_meta_data_QCPGraph, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPGraph::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPGraph))
        return static_cast<void*>(const_cast< QCPGraph*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LineStyle*>(_v) = lineStyle(); break;
        case 1: *reinterpret_cast< QCPScatterStyle*>(_v) = scatterStyle(); break;
        case 2: *reinterpret_cast< ErrorType*>(_v) = errorType(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = errorPen(); break;
        case 4: *reinterpret_cast< double*>(_v) = errorBarSize(); break;
        case 5: *reinterpret_cast< bool*>(_v) = errorBarSkipSymbol(); break;
        case 6: *reinterpret_cast< QCPGraph**>(_v) = channelFillGraph(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLineStyle(*reinterpret_cast< LineStyle*>(_v)); break;
        case 1: setScatterStyle(*reinterpret_cast< QCPScatterStyle*>(_v)); break;
        case 2: setErrorType(*reinterpret_cast< ErrorType*>(_v)); break;
        case 3: setErrorPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: setErrorBarSize(*reinterpret_cast< double*>(_v)); break;
        case 5: setErrorBarSkipSymbol(*reinterpret_cast< bool*>(_v)); break;
        case 6: setChannelFillGraph(*reinterpret_cast< QCPGraph**>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPCurve[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       9,   22, 0x0009510b,
      38,   48, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QCPCurve[] = {
    "QCPCurve\0scatterStyle\0QCPScatterStyle\0"
    "lineStyle\0LineStyle\0"
};

void QCPCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPCurve::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPCurve::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPCurve,
      qt_meta_data_QCPCurve, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPCurve::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPCurve))
        return static_cast<void*>(const_cast< QCPCurve*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPScatterStyle*>(_v) = scatterStyle(); break;
        case 1: *reinterpret_cast< LineStyle*>(_v) = lineStyle(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setScatterStyle(*reinterpret_cast< QCPScatterStyle*>(_v)); break;
        case 1: setLineStyle(*reinterpret_cast< LineStyle*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPBars[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       8,   14, 0x06095103,
      21,   30, 0x00095009,
      39,   30, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_QCPBars[] = {
    "QCPBars\0width\0double\0barBelow\0QCPBars*\0"
    "barAbove\0"
};

void QCPBars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPBars::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPBars::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPBars,
      qt_meta_data_QCPBars, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPBars::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPBars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPBars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPBars))
        return static_cast<void*>(const_cast< QCPBars*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPBars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = width(); break;
        case 1: *reinterpret_cast< QCPBars**>(_v) = barBelow(); break;
        case 2: *reinterpret_cast< QCPBars**>(_v) = barAbove(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWidth(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPStatisticalBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      18,   22, 0x06095103,
      29,   22, 0x06095103,
      37,   22, 0x06095103,
      51,   22, 0x06095103,
      58,   22, 0x06095103,
      72,   22, 0x06095103,
      80,   89, 0x0009510b,
     105,   22, 0x06095103,
     111,   22, 0x06095103,
     124,  135, 0x4d095103,
     140,  135, 0x4d095103,
     154,  135, 0x4d095103,
     164,  177, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QCPStatisticalBox[] = {
    "QCPStatisticalBox\0key\0double\0minimum\0"
    "lowerQuartile\0median\0upperQuartile\0"
    "maximum\0outliers\0QVector<double>\0width\0"
    "whiskerWidth\0whiskerPen\0QPen\0whiskerBarPen\0"
    "medianPen\0outlierStyle\0QCPScatterStyle\0"
};

void QCPStatisticalBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPStatisticalBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPStatisticalBox::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPStatisticalBox,
      qt_meta_data_QCPStatisticalBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPStatisticalBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPStatisticalBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPStatisticalBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPStatisticalBox))
        return static_cast<void*>(const_cast< QCPStatisticalBox*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPStatisticalBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = key(); break;
        case 1: *reinterpret_cast< double*>(_v) = minimum(); break;
        case 2: *reinterpret_cast< double*>(_v) = lowerQuartile(); break;
        case 3: *reinterpret_cast< double*>(_v) = median(); break;
        case 4: *reinterpret_cast< double*>(_v) = upperQuartile(); break;
        case 5: *reinterpret_cast< double*>(_v) = maximum(); break;
        case 6: *reinterpret_cast< QVector<double>*>(_v) = outliers(); break;
        case 7: *reinterpret_cast< double*>(_v) = width(); break;
        case 8: *reinterpret_cast< double*>(_v) = whiskerWidth(); break;
        case 9: *reinterpret_cast< QPen*>(_v) = whiskerPen(); break;
        case 10: *reinterpret_cast< QPen*>(_v) = whiskerBarPen(); break;
        case 11: *reinterpret_cast< QPen*>(_v) = medianPen(); break;
        case 12: *reinterpret_cast< QCPScatterStyle*>(_v) = outlierStyle(); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setKey(*reinterpret_cast< double*>(_v)); break;
        case 1: setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 2: setLowerQuartile(*reinterpret_cast< double*>(_v)); break;
        case 3: setMedian(*reinterpret_cast< double*>(_v)); break;
        case 4: setUpperQuartile(*reinterpret_cast< double*>(_v)); break;
        case 5: setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 6: setOutliers(*reinterpret_cast< QVector<double>*>(_v)); break;
        case 7: setWidth(*reinterpret_cast< double*>(_v)); break;
        case 8: setWhiskerWidth(*reinterpret_cast< double*>(_v)); break;
        case 9: setWhiskerPen(*reinterpret_cast< QPen*>(_v)); break;
        case 10: setWhiskerBarPen(*reinterpret_cast< QPen*>(_v)); break;
        case 11: setMedianPen(*reinterpret_cast< QPen*>(_v)); break;
        case 12: setOutlierStyle(*reinterpret_cast< QCPScatterStyle*>(_v)); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPItemStraightLine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      20,   24, 0x4d095103,
      29,   24, 0x4d095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPItemStraightLine[] = {
    "QCPItemStraightLine\0pen\0QPen\0selectedPen\0"
};

void QCPItemStraightLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPItemStraightLine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPItemStraightLine::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemStraightLine,
      qt_meta_data_QCPItemStraightLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPItemStraightLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPItemStraightLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPItemStraightLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemStraightLine))
        return static_cast<void*>(const_cast< QCPItemStraightLine*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemStraightLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPItemLine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      12,   16, 0x4d095103,
      21,   16, 0x4d095103,
      33,   38, 0x0009510b,
      52,   38, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QCPItemLine[] = {
    "QCPItemLine\0pen\0QPen\0selectedPen\0head\0"
    "QCPLineEnding\0tail\0"
};

void QCPItemLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPItemLine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPItemLine::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemLine,
      qt_meta_data_QCPItemLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPItemLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPItemLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPItemLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemLine))
        return static_cast<void*>(const_cast< QCPItemLine*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        case 2: *reinterpret_cast< QCPLineEnding*>(_v) = head(); break;
        case 3: *reinterpret_cast< QCPLineEnding*>(_v) = tail(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setHead(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        case 3: setTail(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPItemCurve[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      13,   17, 0x4d095103,
      22,   17, 0x4d095103,
      34,   39, 0x0009510b,
      53,   39, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QCPItemCurve[] = {
    "QCPItemCurve\0pen\0QPen\0selectedPen\0"
    "head\0QCPLineEnding\0tail\0"
};

void QCPItemCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPItemCurve::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPItemCurve::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemCurve,
      qt_meta_data_QCPItemCurve, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPItemCurve::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPItemCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPItemCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemCurve))
        return static_cast<void*>(const_cast< QCPItemCurve*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        case 2: *reinterpret_cast< QCPLineEnding*>(_v) = head(); break;
        case 3: *reinterpret_cast< QCPLineEnding*>(_v) = tail(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setHead(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        case 3: setTail(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPItemRect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      12,   16, 0x4d095103,
      21,   16, 0x4d095103,
      33,   39, 0x42095103,
      46,   39, 0x42095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPItemRect[] = {
    "QCPItemRect\0pen\0QPen\0selectedPen\0brush\0"
    "QBrush\0selectedBrush\0"
};

void QCPItemRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPItemRect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPItemRect::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemRect,
      qt_meta_data_QCPItemRect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPItemRect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPItemRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPItemRect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemRect))
        return static_cast<void*>(const_cast< QCPItemRect*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = selectedBrush(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPItemText[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      12,   18, 0x43095103,
      25,   18, 0x43095103,
      39,   43, 0x4d095103,
      48,   43, 0x4d095103,
      60,   66, 0x42095103,
      73,   66, 0x42095103,
      87,   92, 0x40095103,
      98,   92, 0x40095103,
     111,  116, 0x0a095103,
     124,  142, 0x0009510b,
     156,  142, 0x0009510b,
     170,  179, 0x06095103,
     186,  194, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QCPItemText[] = {
    "QCPItemText\0color\0QColor\0selectedColor\0"
    "pen\0QPen\0selectedPen\0brush\0QBrush\0"
    "selectedBrush\0font\0QFont\0selectedFont\0"
    "text\0QString\0positionAlignment\0"
    "Qt::Alignment\0textAlignment\0rotation\0"
    "double\0padding\0QMargins\0"
};

void QCPItemText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPItemText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPItemText::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemText,
      qt_meta_data_QCPItemText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPItemText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPItemText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPItemText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemText))
        return static_cast<void*>(const_cast< QCPItemText*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = selectedColor(); break;
        case 2: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        case 4: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 5: *reinterpret_cast< QBrush*>(_v) = selectedBrush(); break;
        case 6: *reinterpret_cast< QFont*>(_v) = font(); break;
        case 7: *reinterpret_cast< QFont*>(_v) = selectedFont(); break;
        case 8: *reinterpret_cast< QString*>(_v) = text(); break;
        case 9: *reinterpret_cast< Qt::Alignment*>(_v) = positionAlignment(); break;
        case 10: *reinterpret_cast< Qt::Alignment*>(_v) = textAlignment(); break;
        case 11: *reinterpret_cast< double*>(_v) = rotation(); break;
        case 12: *reinterpret_cast< QMargins*>(_v) = padding(); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setSelectedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 3: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 5: setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 6: setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 7: setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 8: setText(*reinterpret_cast< QString*>(_v)); break;
        case 9: setPositionAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 10: setTextAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 11: setRotation(*reinterpret_cast< double*>(_v)); break;
        case 12: setPadding(*reinterpret_cast< QMargins*>(_v)); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPItemEllipse[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      15,   19, 0x4d095103,
      24,   19, 0x4d095103,
      36,   42, 0x42095103,
      49,   42, 0x42095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPItemEllipse[] = {
    "QCPItemEllipse\0pen\0QPen\0selectedPen\0"
    "brush\0QBrush\0selectedBrush\0"
};

void QCPItemEllipse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPItemEllipse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPItemEllipse::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemEllipse,
      qt_meta_data_QCPItemEllipse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPItemEllipse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPItemEllipse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPItemEllipse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemEllipse))
        return static_cast<void*>(const_cast< QCPItemEllipse*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemEllipse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = selectedBrush(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPItemPixmap[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      14,   21, 0x41095103,
      29,   36, 0x01095103,
      41,   57, 0x00095009,
      77,   81, 0x4d095103,
      86,   81, 0x4d095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPItemPixmap[] = {
    "QCPItemPixmap\0pixmap\0QPixmap\0scaled\0"
    "bool\0aspectRatioMode\0Qt::AspectRatioMode\0"
    "pen\0QPen\0selectedPen\0"
};

void QCPItemPixmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPItemPixmap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPItemPixmap::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemPixmap,
      qt_meta_data_QCPItemPixmap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPItemPixmap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPItemPixmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPItemPixmap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemPixmap))
        return static_cast<void*>(const_cast< QCPItemPixmap*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemPixmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPixmap*>(_v) = pixmap(); break;
        case 1: *reinterpret_cast< bool*>(_v) = scaled(); break;
        case 2: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = aspectRatioMode(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 4: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 1: setScaled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPItemTracer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       1,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      14,   18, 0x4d095103,
      23,   18, 0x4d095103,
      35,   41, 0x42095103,
      48,   41, 0x42095103,
      62,   67, 0x06095103,
      74,   80, 0x0009510b,
      92,   98, 0x0009510b,
     108,   67, 0x06095103,
     117,  131, 0x01095103,

 // enums: name, flags, count, data
      80, 0x0,    5,   45,

 // enum data: key, value
     136, uint(QCPItemTracer::tsNone),
     143, uint(QCPItemTracer::tsPlus),
     150, uint(QCPItemTracer::tsCrosshair),
     162, uint(QCPItemTracer::tsCircle),
     171, uint(QCPItemTracer::tsSquare),

       0        // eod
};

static const char qt_meta_stringdata_QCPItemTracer[] = {
    "QCPItemTracer\0pen\0QPen\0selectedPen\0"
    "brush\0QBrush\0selectedBrush\0size\0double\0"
    "style\0TracerStyle\0graph\0QCPGraph*\0"
    "graphKey\0interpolating\0bool\0tsNone\0"
    "tsPlus\0tsCrosshair\0tsCircle\0tsSquare\0"
};

void QCPItemTracer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPItemTracer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPItemTracer::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemTracer,
      qt_meta_data_QCPItemTracer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPItemTracer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPItemTracer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPItemTracer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemTracer))
        return static_cast<void*>(const_cast< QCPItemTracer*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemTracer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = selectedBrush(); break;
        case 4: *reinterpret_cast< double*>(_v) = size(); break;
        case 5: *reinterpret_cast< TracerStyle*>(_v) = style(); break;
        case 6: *reinterpret_cast< QCPGraph**>(_v) = graph(); break;
        case 7: *reinterpret_cast< double*>(_v) = graphKey(); break;
        case 8: *reinterpret_cast< bool*>(_v) = interpolating(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 4: setSize(*reinterpret_cast< double*>(_v)); break;
        case 5: setStyle(*reinterpret_cast< TracerStyle*>(_v)); break;
        case 6: setGraph(*reinterpret_cast< QCPGraph**>(_v)); break;
        case 7: setGraphKey(*reinterpret_cast< double*>(_v)); break;
        case 8: setInterpolating(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPItemBracket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      15,   19, 0x4d095103,
      24,   19, 0x4d095103,
      36,   43, 0x06095103,
      50,   56, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QCPItemBracket[] = {
    "QCPItemBracket\0pen\0QPen\0selectedPen\0"
    "length\0double\0style\0BracketStyle\0"
};

void QCPItemBracket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPItemBracket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPItemBracket::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemBracket,
      qt_meta_data_QCPItemBracket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPItemBracket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPItemBracket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPItemBracket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemBracket))
        return static_cast<void*>(const_cast< QCPItemBracket*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemBracket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = selectedPen(); break;
        case 2: *reinterpret_cast< double*>(_v) = length(); break;
        case 3: *reinterpret_cast< BracketStyle*>(_v) = style(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setLength(*reinterpret_cast< double*>(_v)); break;
        case 3: setStyle(*reinterpret_cast< BracketStyle*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPAxisRect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      12,   23, 0x41095103,
      31,   48, 0x01095103,
      53,   74, 0x0009510b,
      94,  104, 0x0009510b,
     121,  104, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QCPAxisRect[] = {
    "QCPAxisRect\0background\0QPixmap\0"
    "backgroundScaled\0bool\0backgroundScaledMode\0"
    "Qt::AspectRatioMode\0rangeDrag\0"
    "Qt::Orientations\0rangeZoom\0"
};

void QCPAxisRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPAxisRect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPAxisRect::staticMetaObject = {
    { &QCPLayoutElement::staticMetaObject, qt_meta_stringdata_QCPAxisRect,
      qt_meta_data_QCPAxisRect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPAxisRect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPAxisRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPAxisRect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAxisRect))
        return static_cast<void*>(const_cast< QCPAxisRect*>(this));
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPAxisRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPixmap*>(_v) = background(); break;
        case 1: *reinterpret_cast< bool*>(_v) = backgroundScaled(); break;
        case 2: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = backgroundScaledMode(); break;
        case 3: *reinterpret_cast< Qt::Orientations*>(_v) = rangeDrag(); break;
        case 4: *reinterpret_cast< Qt::Orientations*>(_v) = rangeZoom(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBackground(*reinterpret_cast< QPixmap*>(_v)); break;
        case 1: setBackgroundScaled(*reinterpret_cast< bool*>(_v)); break;
        case 2: setBackgroundScaledMode(*reinterpret_cast< Qt::AspectRatioMode*>(_v)); break;
        case 3: setRangeDrag(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        case 4: setRangeZoom(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QCPAbstractLegendItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   45,   54,   54, 0x05,

 // properties: name, type, flags
      55,   68, 0x00095009,
      79,   84, 0x40095103,
      90,  100, 0x43095103,
     107,   84, 0x40095103,
     120,  100, 0x43095103,
     138,  149, 0x01095103,
      45,  149, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPAbstractLegendItem[] = {
    "QCPAbstractLegendItem\0selectionChanged(bool)\0"
    "selected\0\0parentLegend\0QCPLegend*\0"
    "font\0QFont\0textColor\0QColor\0selectedFont\0"
    "selectedTextColor\0selectable\0bool\0"
};

void QCPAbstractLegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCPAbstractLegendItem *_t = static_cast<QCPAbstractLegendItem *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCPAbstractLegendItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPAbstractLegendItem::staticMetaObject = {
    { &QCPLayoutElement::staticMetaObject, qt_meta_stringdata_QCPAbstractLegendItem,
      qt_meta_data_QCPAbstractLegendItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPAbstractLegendItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPAbstractLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPAbstractLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractLegendItem))
        return static_cast<void*>(const_cast< QCPAbstractLegendItem*>(this));
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPAbstractLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPLegend**>(_v) = parentLegend(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = font(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = textColor(); break;
        case 3: *reinterpret_cast< QFont*>(_v) = selectedFont(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = selectedTextColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = selectable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = selected(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 4: setSelectedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 6: setSelected(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAbstractLegendItem::selectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QCPPlottableLegendItem[] = {

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

static const char qt_meta_stringdata_QCPPlottableLegendItem[] = {
    "QCPPlottableLegendItem\0"
};

void QCPPlottableLegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCPPlottableLegendItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPPlottableLegendItem::staticMetaObject = {
    { &QCPAbstractLegendItem::staticMetaObject, qt_meta_stringdata_QCPPlottableLegendItem,
      qt_meta_data_QCPPlottableLegendItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPPlottableLegendItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPPlottableLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPPlottableLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPlottableLegendItem))
        return static_cast<void*>(const_cast< QCPPlottableLegendItem*>(this));
    return QCPAbstractLegendItem::qt_metacast(_clname);
}

int QCPPlottableLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractLegendItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCPLegend[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      14,   19, // properties
       2,   61, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   55,   65,   65, 0x05,

 // properties: name, type, flags
      66,   76, 0x4d095103,
      81,   87, 0x42095103,
      94,   99, 0x40095103,
     105,  115, 0x43095103,
     122,  131, 0x15095103,
     137,  153, 0x02095103,
     157,   76, 0x4d095103,
     171,  187, 0x0009510b,
     203,  187, 0x0009510b,
     217,   76, 0x4d095103,
     235,   76, 0x4d095103,
     257,   87, 0x42095103,
     271,   99, 0x40095103,
     284,  115, 0x43095103,

 // enums: name, flags, count, data
     302, 0x1,    3,   69,
     187, 0x1,    3,   75,

 // enum data: key, value
     317, uint(QCPLegend::spNone),
     324, uint(QCPLegend::spLegendBox),
     336, uint(QCPLegend::spItems),
     317, uint(QCPLegend::spNone),
     324, uint(QCPLegend::spLegendBox),
     336, uint(QCPLegend::spItems),

       0        // eod
};

static const char qt_meta_stringdata_QCPLegend[] = {
    "QCPLegend\0selectionChanged(QCPLegend::SelectableParts)\0"
    "selection\0\0borderPen\0QPen\0brush\0QBrush\0"
    "font\0QFont\0textColor\0QColor\0iconSize\0"
    "QSize\0iconTextPadding\0int\0iconBorderPen\0"
    "selectableParts\0SelectableParts\0"
    "selectedParts\0selectedBorderPen\0"
    "selectedIconBorderPen\0selectedBrush\0"
    "selectedFont\0selectedTextColor\0"
    "SelectablePart\0spNone\0spLegendBox\0"
    "spItems\0"
};

void QCPLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCPLegend *_t = static_cast<QCPLegend *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< QCPLegend::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCPLegend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPLegend::staticMetaObject = {
    { &QCPLayoutGrid::staticMetaObject, qt_meta_stringdata_QCPLegend,
      qt_meta_data_QCPLegend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPLegend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLegend))
        return static_cast<void*>(const_cast< QCPLegend*>(this));
    return QCPLayoutGrid::qt_metacast(_clname);
}

int QCPLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutGrid::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = borderPen(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 2: *reinterpret_cast< QFont*>(_v) = font(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = textColor(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = iconSize(); break;
        case 5: *reinterpret_cast< int*>(_v) = iconTextPadding(); break;
        case 6: *reinterpret_cast< QPen*>(_v) = iconBorderPen(); break;
        case 7: *reinterpret_cast<int*>(_v) = QFlag(selectableParts()); break;
        case 8: *reinterpret_cast<int*>(_v) = QFlag(selectedParts()); break;
        case 9: *reinterpret_cast< QPen*>(_v) = selectedBorderPen(); break;
        case 10: *reinterpret_cast< QPen*>(_v) = selectedIconBorderPen(); break;
        case 11: *reinterpret_cast< QBrush*>(_v) = selectedBrush(); break;
        case 12: *reinterpret_cast< QFont*>(_v) = selectedFont(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = selectedTextColor(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 3: setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: setIconTextPadding(*reinterpret_cast< int*>(_v)); break;
        case 6: setIconBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 7: setSelectableParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 8: setSelectedParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 9: setSelectedBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 10: setSelectedIconBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 11: setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 12: setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 13: setSelectedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPLegend::selectionChanged(QCPLegend::SelectableParts _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QCPPlotTitle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   36,   45,   45, 0x05,

 // properties: name, type, flags
      46,   51, 0x0a095103,
      59,   64, 0x40095103,
      70,   80, 0x43095103,
      87,   64, 0x40095103,
     100,   80, 0x43095103,
     118,  129, 0x01095103,
      36,  129, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QCPPlotTitle[] = {
    "QCPPlotTitle\0selectionChanged(bool)\0"
    "selected\0\0text\0QString\0font\0QFont\0"
    "textColor\0QColor\0selectedFont\0"
    "selectedTextColor\0selectable\0bool\0"
};

void QCPPlotTitle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCPPlotTitle *_t = static_cast<QCPPlotTitle *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCPPlotTitle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPPlotTitle::staticMetaObject = {
    { &QCPLayoutElement::staticMetaObject, qt_meta_stringdata_QCPPlotTitle,
      qt_meta_data_QCPPlotTitle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPPlotTitle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPPlotTitle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPPlotTitle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPlotTitle))
        return static_cast<void*>(const_cast< QCPPlotTitle*>(this));
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPPlotTitle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = text(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = font(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = textColor(); break;
        case 3: *reinterpret_cast< QFont*>(_v) = selectedFont(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = selectedTextColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = selectable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = selected(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 4: setSelectedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 6: setSelected(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPPlotTitle::selectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
