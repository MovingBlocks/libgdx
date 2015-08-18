/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_Collision_WRAP_H_
#define SWIG_Collision_WRAP_H_

struct SwigDirector_btBroadphaseAabbCallback : public btBroadphaseAabbCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btBroadphaseAabbCallback(JNIEnv *jenv);
    virtual ~SwigDirector_btBroadphaseAabbCallback();
    virtual bool process(btBroadphaseProxy const *proxy);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

struct SwigDirector_btBroadphaseRayCallback : public btBroadphaseRayCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btBroadphaseRayCallback(JNIEnv *jenv);
    virtual ~SwigDirector_btBroadphaseRayCallback();
    virtual bool process(btBroadphaseProxy const *proxy);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

class SwigDirector_btNodeOverlapCallback : public btNodeOverlapCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btNodeOverlapCallback(JNIEnv *jenv);
    virtual ~SwigDirector_btNodeOverlapCallback();
    virtual void processNode(int subPart, int triangleIndex);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

class SwigDirector_btOverlappingPairCallback : public btOverlappingPairCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btOverlappingPairCallback(JNIEnv *jenv);
    virtual ~SwigDirector_btOverlappingPairCallback();
    virtual btBroadphasePair *addOverlappingPair(btBroadphaseProxy *proxy0, btBroadphaseProxy *proxy1);
    virtual void *removeOverlappingPair(btBroadphaseProxy *proxy0, btBroadphaseProxy *proxy1, btDispatcher *dispatcher);
    virtual void removeOverlappingPairsContainingProxy(btBroadphaseProxy *proxy0, btDispatcher *dispatcher);
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<3> swig_override;
};

struct SwigDirector_btOverlapCallback : public btOverlapCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btOverlapCallback(JNIEnv *jenv);
    virtual ~SwigDirector_btOverlapCallback();
    virtual bool processOverlap(btBroadphasePair &pair);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

struct SwigDirector_btOverlapFilterCallback : public btOverlapFilterCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btOverlapFilterCallback(JNIEnv *jenv);
    virtual ~SwigDirector_btOverlapFilterCallback();
    virtual bool needBroadphaseCollision(btBroadphaseProxy *proxy0, btBroadphaseProxy *proxy1) const;
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

class SwigDirector_btTriangleCallback : public btTriangleCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btTriangleCallback(JNIEnv *jenv);
    virtual ~SwigDirector_btTriangleCallback();
    virtual void processTriangle(btVector3 *triangle, int partId, int triangleIndex);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

class SwigDirector_btInternalTriangleIndexCallback : public btInternalTriangleIndexCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btInternalTriangleIndexCallback(JNIEnv *jenv);
    virtual ~SwigDirector_btInternalTriangleIndexCallback();
    virtual void internalProcessTriangleIndex(btVector3 *triangle, int partId, int triangleIndex);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

class SwigDirector_btConvexTriangleCallback : public btConvexTriangleCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btConvexTriangleCallback(JNIEnv *jenv, btDispatcher *dispatcher, btCollisionObjectWrapper const *body0Wrap, btCollisionObjectWrapper const *body1Wrap, bool isSwapped);
    virtual ~SwigDirector_btConvexTriangleCallback();
    virtual void processTriangle(btVector3 *triangle, int partId, int triangleIndex);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

class SwigDirector_btGhostPairCallback : public btGhostPairCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btGhostPairCallback(JNIEnv *jenv);
    virtual ~SwigDirector_btGhostPairCallback();
    virtual btBroadphasePair *addOverlappingPair(btBroadphaseProxy *proxy0, btBroadphaseProxy *proxy1);
    virtual void *removeOverlappingPair(btBroadphaseProxy *proxy0, btBroadphaseProxy *proxy1, btDispatcher *dispatcher);
    virtual void removeOverlappingPairsContainingProxy(btBroadphaseProxy *arg0, btDispatcher *arg1);
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<3> swig_override;
};

struct SwigDirector_RayResultCallback : public btCollisionWorld::RayResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_RayResultCallback(JNIEnv *jenv);
    virtual ~SwigDirector_RayResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(btCollisionWorld::LocalRayResult &rayResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};

struct SwigDirector_ClosestRayResultCallback : public btCollisionWorld::ClosestRayResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ClosestRayResultCallback(JNIEnv *jenv, btVector3 const &rayFromWorld, btVector3 const &rayToWorld);
    virtual ~SwigDirector_ClosestRayResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(btCollisionWorld::LocalRayResult &rayResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};

struct SwigDirector_AllHitsRayResultCallback : public btCollisionWorld::AllHitsRayResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_AllHitsRayResultCallback(JNIEnv *jenv, btVector3 const &rayFromWorld, btVector3 const &rayToWorld);
    virtual ~SwigDirector_AllHitsRayResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(btCollisionWorld::LocalRayResult &rayResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};

struct SwigDirector_ConvexResultCallback : public btCollisionWorld::ConvexResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ConvexResultCallback(JNIEnv *jenv);
    virtual ~SwigDirector_ConvexResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(btCollisionWorld::LocalConvexResult &convexResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};

struct SwigDirector_ClosestConvexResultCallback : public btCollisionWorld::ClosestConvexResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ClosestConvexResultCallback(JNIEnv *jenv, btVector3 const &convexFromWorld, btVector3 const &convexToWorld);
    virtual ~SwigDirector_ClosestConvexResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(btCollisionWorld::LocalConvexResult &convexResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};

struct SwigDirector_ContactResultCallback : public btCollisionWorld::ContactResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ContactResultCallback(JNIEnv *jenv);
    virtual ~SwigDirector_ContactResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(btManifoldPoint &cp, btCollisionObjectWrapper const *colObj0Wrap, int partId0, int index0, btCollisionObjectWrapper const *colObj1Wrap, int partId1, int index1);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};

class SwigDirector_btTriangleRaycastCallback : public btTriangleRaycastCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btTriangleRaycastCallback(JNIEnv *jenv, btVector3 const &from, btVector3 const &to, unsigned int flags = 0);
    virtual ~SwigDirector_btTriangleRaycastCallback();
    virtual void processTriangle(btVector3 *triangle, int partId, int triangleIndex);
    virtual btScalar reportHit(btVector3 const &hitNormalLocal, btScalar hitFraction, int partId, int triangleIndex);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};

class SwigDirector_btTriangleConvexcastCallback : public btTriangleConvexcastCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btTriangleConvexcastCallback(JNIEnv *jenv, btConvexShape const *convexShape, btTransform const &convexShapeFrom, btTransform const &convexShapeTo, btTransform const &triangleToWorld, btScalar const triangleCollisionMargin);
    virtual ~SwigDirector_btTriangleConvexcastCallback();
    virtual void processTriangle(btVector3 *triangle, int partId, int triangleIndex);
    virtual btScalar reportHit(btVector3 const &hitNormalLocal, btVector3 const &hitPointLocal, btScalar hitFraction, int partId, int triangleIndex);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};

class SwigDirector_CustomCollisionDispatcher : public CustomCollisionDispatcher, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_CustomCollisionDispatcher(JNIEnv *jenv, btCollisionConfiguration *collisionConfiguration);
    virtual ~SwigDirector_CustomCollisionDispatcher();
    virtual btPersistentManifold *getNewManifold(btCollisionObject const *b0, btCollisionObject const *b1);
    virtual void releaseManifold(btPersistentManifold *manifold);
    virtual void clearManifold(btPersistentManifold *manifold);
    virtual bool needsCollision(btCollisionObject const *body0, btCollisionObject const *body1);
    virtual bool needsResponse(btCollisionObject const *body0, btCollisionObject const *body1);
    virtual void dispatchAllCollisionPairs(btOverlappingPairCache *pairCache, btDispatcherInfo const &dispatchInfo, btDispatcher *dispatcher);
    virtual int getNumManifolds() const;
    virtual btPersistentManifold **getInternalManifoldPointer();
    virtual void *allocateCollisionAlgorithm(int size);
    virtual void freeCollisionAlgorithm(void *ptr);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};

class SwigDirector_ContactListener : public ContactListener, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ContactListener(JNIEnv *jenv, bool dummy);
    virtual ~SwigDirector_ContactListener();
    virtual bool onContactAdded(btManifoldPoint &cp, btCollisionObjectWrapper const &colObj0Wrap, int partId0, int index0, btCollisionObjectWrapper const &colObj1Wrap, int partId1, int index1);
    virtual bool onContactAdded(btManifoldPoint &cp, btCollisionObject const *colObj0, int partId0, int index0, btCollisionObject const *colObj1, int partId1, int index1);
    virtual bool onContactAdded(btManifoldPoint &cp, int userValue0, int partId0, int index0, int userValue1, int partId1, int index1);
    virtual bool onContactAdded(btManifoldPoint &cp, btCollisionObjectWrapper const &colObj0Wrap, int partId0, int index0, bool match0, btCollisionObjectWrapper const &colObj1Wrap, int partId1, int index1, bool match1);
    virtual bool onContactAdded(btManifoldPoint &cp, btCollisionObject const *colObj0, int partId0, int index0, bool match0, btCollisionObject const *colObj1, int partId1, int index1, bool match1);
    virtual bool onContactAdded(btManifoldPoint &cp, int userValue0, int partId0, int index0, bool match0, int userValue1, int partId1, int index1, bool match1);
    virtual bool onContactAdded(btCollisionObjectWrapper const &colObj0Wrap, int partId0, int index0, btCollisionObjectWrapper const &colObj1Wrap, int partId1, int index1);
    virtual bool onContactAdded(btCollisionObject const *colObj0, int partId0, int index0, btCollisionObject const *colObj1, int partId1, int index1);
    virtual bool onContactAdded(int userValue0, int partId0, int index0, int userValue1, int partId1, int index1);
    virtual bool onContactAdded(btCollisionObjectWrapper const &colObj0Wrap, int partId0, int index0, bool match0, btCollisionObjectWrapper const &colObj1Wrap, int partId1, int index1, bool match1);
    virtual bool onContactAdded(btCollisionObject const *colObj0, int partId0, int index0, bool match0, btCollisionObject const *colObj1, int partId1, int index1, bool match1);
    virtual bool onContactAdded(int userValue0, int partId0, int index0, bool match0, int userValue1, int partId1, int index1, bool match1);
    virtual void onContactProcessed(btManifoldPoint &cp, btCollisionObject const *colObj0, btCollisionObject const *colObj1);
    virtual void onContactProcessed(btManifoldPoint &cp, int userValue0, int userValue1);
    virtual void onContactProcessed(btManifoldPoint &cp, btCollisionObject const *colObj0, bool match0, btCollisionObject const *colObj1, bool match1);
    virtual void onContactProcessed(btManifoldPoint &cp, int userValue0, bool match0, int userValue1, bool match1);
    virtual void onContactProcessed(btCollisionObject const *colObj0, btCollisionObject const *colObj1);
    virtual void onContactProcessed(int userValue0, int userValue1);
    virtual void onContactProcessed(btCollisionObject const *colObj0, bool match0, btCollisionObject const *colObj1, bool match1);
    virtual void onContactProcessed(int userValue0, bool match0, int userValue1, bool match1);
    virtual void onContactDestroyed(int manifoldPointUserValue);
    virtual void onContactStarted(btPersistentManifold *manifold);
    virtual void onContactStarted(btCollisionObject const *colObj0, btCollisionObject const *colObj1);
    virtual void onContactStarted(int const &userValue0, int const &userValue1);
    virtual void onContactStarted(btPersistentManifold *manifold, bool const &match0, bool const &match1);
    virtual void onContactStarted(btCollisionObject const *colObj0, bool const &match0, btCollisionObject const *colObj1, bool const &match1);
    virtual void onContactStarted(int const &userValue0, bool const &match0, int const &userValue1, bool const &match1);
    virtual void onContactEnded(btPersistentManifold *manifold);
    virtual void onContactEnded(btCollisionObject const *colObj0, btCollisionObject const *colObj1);
    virtual void onContactEnded(int const &userValue0, int const &userValue1);
    virtual void onContactEnded(btPersistentManifold *manifold, bool const &match0, bool const &match1);
    virtual void onContactEnded(btCollisionObject const *colObj0, bool const &match0, btCollisionObject const *colObj1, bool const &match1);
    virtual void onContactEnded(int const &userValue0, bool const &match0, int const &userValue1, bool const &match1);
public:
    bool swig_overrides(int n) {
      return (n < 33 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<33> swig_override;
};

class SwigDirector_ContactCache : public ContactCache, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ContactCache(JNIEnv *jenv, bool dummy);
    virtual ~SwigDirector_ContactCache();
    virtual void onContactStarted(btPersistentManifold *manifold, bool const &match0, bool const &match1);
    virtual void onContactEnded(btCollisionObject const *colObj0, bool const &match0, btCollisionObject const *colObj1, bool const &match1);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<2> swig_override;
};


#endif
