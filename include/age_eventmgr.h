#ifndef ALISTENERMANAGER_H
#define ALISTENERMANAGER_H
#include <list>
#include "age_framelistener.h"
#include "age_mouselistener.h"
#include "age_keylistener.h"
#include "age_system.h"
#include "age_baselistener.h"
#include "age_scene.h"
#include <QMouseEvent>
namespace AGE2D{

class AEventMgr
{
public:
    AEventMgr();
    void addListener(ABaseListener *);
    void addFrameListener(AFrameListener * a);
    void addMouseListener(AMouseListener * a);
    void addKeyListener(AKeyListener *a);
    friend class AWidget;
    std::list<ABaseListener *> * getList();
protected:
    virtual void run();
    virtual void mouseMoveEvent(QMouseEvent *);
    virtual void mousePressEvent(QMouseEvent *);
    virtual void mouseReleaseEvent(QMouseEvent *);
    virtual void keyReleaseEvent (QKeyEvent *a);
    virtual void keyPressEvent(QKeyEvent *);
private:
    std::list<ABaseListener *> listenerList;
    std::list<AMouseListener *> m_mouse_listener_list;
    std::list<AFrameListener *> m_frame_listener_list;
    std::list<AKeyListener*> m_key_listener_list;
};
}


#endif // ALISTENERMANAGER_H
