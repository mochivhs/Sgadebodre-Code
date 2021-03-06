// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_gameObjects_Boyfriend
#include <gameObjects/Boyfriend.h>
#endif
#ifndef INCLUDED_gameObjects_Character
#include <gameObjects/Character.h>
#endif
#ifndef INCLUDED_meta_Controls
#include <meta/Controls.h>
#endif
#ifndef INCLUDED_meta_MusicBeatState
#include <meta/MusicBeatState.h>
#endif
#ifndef INCLUDED_meta_MusicBeatSubState
#include <meta/MusicBeatSubState.h>
#endif
#ifndef INCLUDED_meta_data_Conductor
#include <meta/data/Conductor.h>
#endif
#ifndef INCLUDED_meta_data_PlayerSettings
#include <meta/data/PlayerSettings.h>
#endif
#ifndef INCLUDED_meta_data_dependency_FNFSprite
#include <meta/data/dependency/FNFSprite.h>
#endif
#ifndef INCLUDED_meta_data_dependency_FNFUIState
#include <meta/data/dependency/FNFUIState.h>
#endif
#ifndef INCLUDED_meta_state_PlayState
#include <meta/state/PlayState.h>
#endif
#ifndef INCLUDED_meta_state_menus_FreeplayState
#include <meta/state/menus/FreeplayState.h>
#endif
#ifndef INCLUDED_meta_state_menus_StoryMenuState
#include <meta/state/menus/StoryMenuState.h>
#endif
#ifndef INCLUDED_meta_subState_GameOverSubstate
#include <meta/subState/GameOverSubstate.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_77995d81fbffb9e9_15_new,"meta.subState.GameOverSubstate","new",0x520deb5d,"meta.subState.GameOverSubstate.new","meta/subState/GameOverSubstate.hx",15,0x8d0362d3)
HX_LOCAL_STACK_FRAME(_hx_pos_77995d81fbffb9e9_61_update,"meta.subState.GameOverSubstate","update",0x5c52a72c,"meta.subState.GameOverSubstate.update","meta/subState/GameOverSubstate.hx",61,0x8d0362d3)
HX_LOCAL_STACK_FRAME(_hx_pos_77995d81fbffb9e9_91_beatHit,"meta.subState.GameOverSubstate","beatHit",0x4234c7fa,"meta.subState.GameOverSubstate.beatHit","meta/subState/GameOverSubstate.hx",91,0x8d0362d3)
HX_LOCAL_STACK_FRAME(_hx_pos_77995d81fbffb9e9_99_endBullshit,"meta.subState.GameOverSubstate","endBullshit",0xe17ad74b,"meta.subState.GameOverSubstate.endBullshit","meta/subState/GameOverSubstate.hx",99,0x8d0362d3)
HX_LOCAL_STACK_FRAME(_hx_pos_77995d81fbffb9e9_110_endBullshit,"meta.subState.GameOverSubstate","endBullshit",0xe17ad74b,"meta.subState.GameOverSubstate.endBullshit","meta/subState/GameOverSubstate.hx",110,0x8d0362d3)
HX_LOCAL_STACK_FRAME(_hx_pos_77995d81fbffb9e9_108_endBullshit,"meta.subState.GameOverSubstate","endBullshit",0xe17ad74b,"meta.subState.GameOverSubstate.endBullshit","meta/subState/GameOverSubstate.hx",108,0x8d0362d3)
namespace meta{
namespace subState{

void GameOverSubstate_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_77995d81fbffb9e9_15_new)
HXLINE(  96)		this->isEnding = false;
HXLINE(  20)		this->stageSuffix = HX_("",00,00,00,00);
HXLINE(  24)		::String daBoyfriendType = ::meta::state::PlayState_obj::boyfriend->curCharacter;
HXLINE(  25)		::String daBf = HX_("",00,00,00,00);
HXLINE(  26)		::String _hx_switch_0 = daBoyfriendType;
            		if (  (_hx_switch_0==HX_("bf-og",41,23,d3,b0)) ){
HXLINE(  29)			daBf = daBoyfriendType;
HXDLIN(  29)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixel",fd,03,90,37)) ){
HXLINE(  31)			daBf = HX_("bf-pixel-dead",34,d0,3d,c4);
HXLINE(  32)			this->stageSuffix = HX_("-pixel",39,03,b3,c0);
HXLINE(  30)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  34)			daBf = HX_("bf-dead",0d,ad,0c,df);
            		}
            		_hx_goto_0:;
HXLINE(  37)		::meta::state::PlayState_obj::boyfriend->destroy();
HXLINE(  39)		super::__construct();
HXLINE(  41)		::meta::data::Conductor_obj::songPosition = ( (Float)(0) );
HXLINE(  43)		this->bf =  ::gameObjects::Boyfriend_obj::__alloc( HX_CTX ,x,y,daBf);
HXLINE(  44)		this->add(this->bf);
HXLINE(  46)		Float _hx_tmp = (this->bf->getGraphicMidpoint(null())->x + 20);
HXDLIN(  46)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,_hx_tmp,(this->bf->getGraphicMidpoint(null())->y - ( (Float)(40) )),1,1);
HXLINE(  47)		this->add(this->camFollow);
HXLINE(  49)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN(  49)		_hx_tmp1->play(::Paths_obj::sound((HX_("fnf_loss_sfx",6a,36,72,11) + this->stageSuffix),null()),null(),null(),null(),null(),null());
HXLINE(  50)		::meta::data::Conductor_obj::changeBPM(( (Float)(100) ),null());
HXLINE(  54)		::flixel::FlxG_obj::camera->scroll->set(null(),null());
HXLINE(  55)		::flixel::FlxG_obj::camera->target = null();
HXLINE(  57)		this->bf->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
            	}

Dynamic GameOverSubstate_obj::__CreateEmpty() { return new GameOverSubstate_obj; }

void *GameOverSubstate_obj::_hx_vtable = 0;

Dynamic GameOverSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameOverSubstate_obj > _hx_result = new GameOverSubstate_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GameOverSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x246c1a6d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x246c1a6d;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x72d40f07 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GameOverSubstate_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_77995d81fbffb9e9_61_update)
HXLINE(  62)		this->super::update(elapsed);
HXLINE(  64)		if (::meta::data::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  65)			this->endBullshit();
            		}
HXLINE(  67)		if (::meta::data::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  69)			{
HXLINE(  69)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  69)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE(  71)			if (::meta::state::PlayState_obj::isStoryMode) {
HXLINE(  73)				::Main_obj::switchState(::hx::ObjectPtr<OBJ_>(this), ::meta::state::menus::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            			else {
HXLINE(  76)				::Main_obj::switchState(::hx::ObjectPtr<OBJ_>(this), ::meta::state::menus::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            		}
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		if ((this->bf->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE(  79)			_hx_tmp = (this->bf->animation->_curAnim->curFrame == 12);
            		}
            		else {
HXLINE(  79)			_hx_tmp = false;
            		}
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  80)			::flixel::FlxG_obj::camera->follow(this->camFollow,::flixel::FlxCameraFollowStyle_obj::LOCKON_dyn(),((Float)0.01));
            		}
HXLINE(  82)		bool _hx_tmp1;
HXDLIN(  82)		if ((this->bf->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE(  82)			_hx_tmp1 = this->bf->animation->_curAnim->finished;
            		}
            		else {
HXLINE(  82)			_hx_tmp1 = false;
            		}
HXDLIN(  82)		if (_hx_tmp1) {
HXLINE(  83)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  83)			::String library = null();
HXDLIN(  83)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + (HX_("gameOver",66,92,de,b5) + this->stageSuffix)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
            		}
            	}


void GameOverSubstate_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_77995d81fbffb9e9_91_beatHit)
HXDLIN(  91)		this->super::beatHit();
            	}


void GameOverSubstate_obj::endBullshit(){
            	HX_GC_STACKFRAME(&_hx_pos_77995d81fbffb9e9_99_endBullshit)
HXLINE(  98)		 ::meta::subState::GameOverSubstate _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 100)		if (!(this->isEnding)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::meta::subState::GameOverSubstate,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::meta::subState::GameOverSubstate,_gthis) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_77995d81fbffb9e9_110_endBullshit)
HXLINE( 110)					 ::meta::subState::GameOverSubstate _gthis1 = _gthis;
HXDLIN( 110)					::Main_obj::switchState(_gthis1, ::meta::state::PlayState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_77995d81fbffb9e9_108_endBullshit)
HXLINE( 108)				::flixel::FlxG_obj::camera->fade(-16777216,1,false, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 102)			this->isEnding = true;
HXLINE( 103)			this->bf->playAnim(HX_("deathConfirm",2c,44,2b,12),true,null(),null());
HXLINE( 104)			{
HXLINE( 104)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 104)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 105)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 105)			::String library = null();
HXDLIN( 105)			_hx_tmp->play(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + (HX_("gameOverEnd",15,2d,a9,8d) + this->stageSuffix)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null(),null(),null());
HXLINE( 106)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.7), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameOverSubstate_obj,endBullshit,(void))


::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< GameOverSubstate_obj > __this = new GameOverSubstate_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	GameOverSubstate_obj *__this = (GameOverSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameOverSubstate_obj), true, "meta.subState.GameOverSubstate"));
	*(void **)__this = GameOverSubstate_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

GameOverSubstate_obj::GameOverSubstate_obj()
{
}

void GameOverSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverSubstate);
	HX_MARK_MEMBER_NAME(bf,"bf");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bf,"bf");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameOverSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { return ::hx::Val( bf ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { return ::hx::Val( stageSuffix ); }
		if (HX_FIELD_EQ(inName,"endBullshit") ) { return ::hx::Val( endBullshit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameOverSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { bf=inValue.Cast<  ::gameObjects::Boyfriend >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { stageSuffix=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bf",c4,55,00,00));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("stageSuffix",2f,64,9f,2f));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameOverSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::gameObjects::Boyfriend */ ,(int)offsetof(GameOverSubstate_obj,bf),HX_("bf",c4,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(GameOverSubstate_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsString,(int)offsetof(GameOverSubstate_obj,stageSuffix),HX_("stageSuffix",2f,64,9f,2f)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameOverSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String GameOverSubstate_obj_sMemberFields[] = {
	HX_("bf",c4,55,00,00),
	HX_("camFollow",e0,6e,47,22),
	HX_("stageSuffix",2f,64,9f,2f),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("isEnding",71,3f,f2,52),
	HX_("endBullshit",4e,f7,81,48),
	::String(null()) };

::hx::Class GameOverSubstate_obj::__mClass;

void GameOverSubstate_obj::__register()
{
	GameOverSubstate_obj _hx_dummy;
	GameOverSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("meta.subState.GameOverSubstate",eb,f8,cb,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameOverSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameOverSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameOverSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace meta
} // end namespace subState
