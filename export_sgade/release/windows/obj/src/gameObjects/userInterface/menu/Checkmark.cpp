// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_gameObjects_userInterface_menu_Checkmark
#include <gameObjects/userInterface/menu/Checkmark.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_meta_data_dependency_FNFSprite
#include <meta/data/dependency/FNFSprite.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_12ef8ff1eb911bf2_10_new,"gameObjects.userInterface.menu.Checkmark","new",0x48207a84,"gameObjects.userInterface.menu.Checkmark.new","gameObjects/userInterface/menu/Checkmark.hx",10,0xecfa44eb)
HX_LOCAL_STACK_FRAME(_hx_pos_12ef8ff1eb911bf2_16_update,"gameObjects.userInterface.menu.Checkmark","update",0x9ccaca65,"gameObjects.userInterface.menu.Checkmark.update","gameObjects/userInterface/menu/Checkmark.hx",16,0xecfa44eb)
namespace gameObjects{
namespace userInterface{
namespace menu{

void Checkmark_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_12ef8ff1eb911bf2_10_new)
HXLINE(  11)		super::__construct(x,y);
HXLINE(  12)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic Checkmark_obj::__CreateEmpty() { return new Checkmark_obj; }

void *Checkmark_obj::_hx_vtable = 0;

Dynamic Checkmark_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Checkmark_obj > _hx_result = new Checkmark_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Checkmark_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x78a693e9) {
		if (inClassId<=(int)0x65718d4a) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x65718d4a;
			}
		} else {
			return inClassId==(int)0x78a693e9;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Checkmark_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_12ef8ff1eb911bf2_16_update)
HXLINE(  17)		if (::hx::IsNotNull( this->animation )) {
HXLINE(  19)			bool _hx_tmp;
HXDLIN(  19)			if (this->animation->get_finished()) {
HXLINE(  19)				_hx_tmp = (this->animation->_curAnim->name == HX_("true",4e,a7,03,4d));
            			}
            			else {
HXLINE(  19)				_hx_tmp = false;
            			}
HXDLIN(  19)			if (_hx_tmp) {
HXLINE(  20)				this->playAnim(HX_("true finished",84,b2,bb,98),null(),null(),null());
            			}
HXLINE(  21)			bool _hx_tmp1;
HXDLIN(  21)			if (this->animation->get_finished()) {
HXLINE(  21)				_hx_tmp1 = (this->animation->_curAnim->name == HX_("false",a3,35,4f,fb));
            			}
            			else {
HXLINE(  21)				_hx_tmp1 = false;
            			}
HXDLIN(  21)			if (_hx_tmp1) {
HXLINE(  22)				this->playAnim(HX_("false finished",8f,31,48,70),null(),null(),null());
            			}
            		}
HXLINE(  25)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< Checkmark_obj > Checkmark_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< Checkmark_obj > __this = new Checkmark_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< Checkmark_obj > Checkmark_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	Checkmark_obj *__this = (Checkmark_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Checkmark_obj), true, "gameObjects.userInterface.menu.Checkmark"));
	*(void **)__this = Checkmark_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

Checkmark_obj::Checkmark_obj()
{
}

::hx::Val Checkmark_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Checkmark_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Checkmark_obj_sStaticStorageInfo = 0;
#endif

static ::String Checkmark_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Checkmark_obj::__mClass;

void Checkmark_obj::__register()
{
	Checkmark_obj _hx_dummy;
	Checkmark_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gameObjects.userInterface.menu.Checkmark",92,28,b0,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Checkmark_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Checkmark_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Checkmark_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Checkmark_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace gameObjects
} // end namespace userInterface
} // end namespace menu