// Generated by Haxe 4.1.5
#ifndef INCLUDED_meta_state_menus_MainMenuState
#define INCLUDED_meta_state_menus_MainMenuState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_meta_MusicBeatState
#include <meta/MusicBeatState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(meta,MusicBeatState)
HX_DECLARE_CLASS3(meta,data,dependency,FNFUIState)
HX_DECLARE_CLASS3(meta,state,menus,MainMenuState)

namespace meta{
namespace state{
namespace menus{


class HXCPP_CLASS_ATTRIBUTES MainMenuState_obj : public  ::meta::MusicBeatState_obj
{
	public:
		typedef  ::meta::MusicBeatState_obj super;
		typedef MainMenuState_obj OBJ_;
		MainMenuState_obj();

	public:
		enum { _hx_ClassId = 0x25d7e651 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="meta.state.menus.MainMenuState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"meta.state.menus.MainMenuState"); }
		static ::hx::ObjectPtr< MainMenuState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< MainMenuState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MainMenuState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MainMenuState",59,88,5e,20); }

		 ::flixel::group::FlxTypedGroup menuItems;
		Float curSelected;
		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite magenta;
		 ::flixel::FlxObject camFollow;
		::Array< ::String > optionShit;
		::Array< Float > canSnap;
		void create();

		bool selectedSomethin;
		Float counterControl;
		void update(Float elapsed);

		int lastCurSelected;
		void updateSelection();
		::Dynamic updateSelection_dyn();

};

} // end namespace meta
} // end namespace state
} // end namespace menus

#endif /* INCLUDED_meta_state_menus_MainMenuState */ 
