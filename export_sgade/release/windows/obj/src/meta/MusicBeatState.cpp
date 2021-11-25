// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_meta_Controls
#include <meta/Controls.h>
#endif
#ifndef INCLUDED_meta_MusicBeatState
#include <meta/MusicBeatState.h>
#endif
#ifndef INCLUDED_meta_data_Conductor
#include <meta/data/Conductor.h>
#endif
#ifndef INCLUDED_meta_data_PlayerSettings
#include <meta/data/PlayerSettings.h>
#endif
#ifndef INCLUDED_meta_data_dependency_FNFUIState
#include <meta/data/dependency/FNFUIState.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a5380f9c49bfb3f_20_new,"meta.MusicBeatState","new",0x998dbb71,"meta.MusicBeatState.new","meta/MusicBeat.hx",20,0x5e5009cd)
HX_LOCAL_STACK_FRAME(_hx_pos_5a5380f9c49bfb3f_32_get_controls,"meta.MusicBeatState","get_controls",0x0578e54e,"meta.MusicBeatState.get_controls","meta/MusicBeat.hx",32,0x5e5009cd)
HX_LOCAL_STACK_FRAME(_hx_pos_5a5380f9c49bfb3f_36_create,"meta.MusicBeatState","create",0x0cd6fc8b,"meta.MusicBeatState.create","meta/MusicBeat.hx",36,0x5e5009cd)
HX_LOCAL_STACK_FRAME(_hx_pos_5a5380f9c49bfb3f_54_update,"meta.MusicBeatState","update",0x17cd1b98,"meta.MusicBeatState.update","meta/MusicBeat.hx",54,0x5e5009cd)
HX_LOCAL_STACK_FRAME(_hx_pos_5a5380f9c49bfb3f_61_updateContents,"meta.MusicBeatState","updateContents",0xeb0c34d2,"meta.MusicBeatState.updateContents","meta/MusicBeat.hx",61,0x5e5009cd)
HX_LOCAL_STACK_FRAME(_hx_pos_5a5380f9c49bfb3f_74_updateBeat,"meta.MusicBeatState","updateBeat",0x04cbd52e,"meta.MusicBeatState.updateBeat","meta/MusicBeat.hx",74,0x5e5009cd)
HX_LOCAL_STACK_FRAME(_hx_pos_5a5380f9c49bfb3f_78_updateCurStep,"meta.MusicBeatState","updateCurStep",0xf8928834,"meta.MusicBeatState.updateCurStep","meta/MusicBeat.hx",78,0x5e5009cd)
HX_LOCAL_STACK_FRAME(_hx_pos_5a5380f9c49bfb3f_95_stepHit,"meta.MusicBeatState","stepHit",0x9f1cf5f8,"meta.MusicBeatState.stepHit","meta/MusicBeat.hx",95,0x5e5009cd)
HX_LOCAL_STACK_FRAME(_hx_pos_5a5380f9c49bfb3f_100_beatHit,"meta.MusicBeatState","beatHit",0x91e0320e,"meta.MusicBeatState.beatHit","meta/MusicBeat.hx",100,0x5e5009cd)
namespace meta{

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_5a5380f9c49bfb3f_20_new)
HXLINE(  27)		this->curBeat = 0;
HXLINE(  26)		this->curStep = 0;
HXLINE(  24)		this->lastStep = ((Float)0);
HXLINE(  23)		this->lastBeat = ((Float)0);
HXLINE(  20)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2f064378) {
		if (inClassId<=(int)0x0f8d4977) {
			if (inClassId<=(int)0x0225b2d9) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0225b2d9;
			} else {
				return inClassId==(int)0x0f8d4977;
			}
		} else {
			return inClassId==(int)0x23a57bae || inClassId==(int)0x2f064378;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

 ::meta::Controls MusicBeatState_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_5a5380f9c49bfb3f_32_get_controls)
HXDLIN(  32)		return ::meta::data::PlayerSettings_obj::player1->controls;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,get_controls,return )

void MusicBeatState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_5a5380f9c49bfb3f_36_create)
HXLINE(  38)		if (::hx::IsNotEq( ::Main_obj::lastState,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE(  39)			::Main_obj::dumpCache();
            		}
HXLINE(  41)		if (::hx::IsNotNull( this->transIn )) {
HXLINE(  42)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  42)			::String _hx_tmp1 = (HX_("reg ",4c,50,a7,4b) + ::Std_obj::string(this->transIn->region));
HXDLIN(  42)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source_sgade/meta/MusicBeat.hx",a8,77,ec,b9),42,HX_("meta.MusicBeatState",ff,2e,75,5a),HX_("create",fc,66,0f,7c)));
            		}
HXLINE(  44)		this->super::create();
            	}


void MusicBeatState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5a5380f9c49bfb3f_54_update)
HXLINE(  55)		this->updateContents();
HXLINE(  57)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateContents(){
            	HX_STACKFRAME(&_hx_pos_5a5380f9c49bfb3f_61_updateContents)
HXLINE(  63)		int oldStep = this->curStep;
HXLINE(  65)		this->updateCurStep();
HXLINE(  66)		this->updateBeat();
HXLINE(  68)		bool _hx_tmp;
HXDLIN(  68)		if ((oldStep != this->curStep)) {
HXLINE(  68)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  68)			_hx_tmp = false;
            		}
HXDLIN(  68)		if (_hx_tmp) {
HXLINE(  69)			this->stepHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateContents,(void))

void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_5a5380f9c49bfb3f_74_updateBeat)
HXDLIN(  74)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_5a5380f9c49bfb3f_78_updateCurStep)
HXLINE(  79)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),( (Float)(0) ))
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  84)		{
HXLINE(  84)			int _g = 0;
HXDLIN(  84)			int _g1 = ::meta::data::Conductor_obj::bpmChangeMap->length;
HXDLIN(  84)			while((_g < _g1)){
HXLINE(  84)				_g = (_g + 1);
HXDLIN(  84)				int i = (_g - 1);
HXLINE(  86)				if (::hx::IsGreaterEq( ::meta::data::Conductor_obj::songPosition,::meta::data::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  87)					lastChange = ::meta::data::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  90)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(((::meta::data::Conductor_obj::songPosition - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::meta::data::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_5a5380f9c49bfb3f_95_stepHit)
HXDLIN(  95)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE(  96)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_5a5380f9c49bfb3f_100_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "meta.MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { return ::hx::Val( lastBeat ); }
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateContents") ) { return ::hx::Val( updateContents_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { lastBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("controls",76,86,bc,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MusicBeatState_obj_sStaticStorageInfo = 0;
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("updateContents",43,f8,4d,64),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

::hx::Class MusicBeatState_obj::__mClass;

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("meta.MusicBeatState",ff,2e,75,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace meta
