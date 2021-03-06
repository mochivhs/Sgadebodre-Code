// Generated by Haxe 4.1.5
#ifndef INCLUDED_meta_Controls
#define INCLUDED_meta_Controls

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionSet)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(meta,Control)
HX_DECLARE_CLASS1(meta,Controls)
HX_DECLARE_CLASS1(meta,Device)
HX_DECLARE_CLASS1(meta,KeyboardScheme)

namespace meta{


class HXCPP_CLASS_ATTRIBUTES Controls_obj : public  ::flixel::input::actions::FlxActionSet_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionSet_obj super;
		typedef Controls_obj OBJ_;
		Controls_obj();

	public:
		enum { _hx_ClassId = 0x56ad0b1b };

		void __construct(::String name, ::meta::KeyboardScheme __o_scheme);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="meta.Controls")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"meta.Controls"); }
		static ::hx::ObjectPtr< Controls_obj > __new(::String name, ::meta::KeyboardScheme __o_scheme);
		static ::hx::ObjectPtr< Controls_obj > __alloc(::hx::Ctx *_hx_ctx,::String name, ::meta::KeyboardScheme __o_scheme);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Controls_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Controls",96,42,6e,11); }

		static void init();
		static ::Dynamic init_dyn();

		static void addKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys,int state);
		static ::Dynamic addKeys_dyn();

		static void removeKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys);
		static ::Dynamic removeKeys_dyn();

		static void addButtons( ::flixel::input::actions::FlxActionDigital action,::Array< int > buttons,int state,int id);
		static ::Dynamic addButtons_dyn();

		static void removeButtons( ::flixel::input::actions::FlxActionDigital action,int gamepadID,::Array< int > buttons);
		static ::Dynamic removeButtons_dyn();

		static bool isDevice( ::flixel::input::actions::FlxActionInput input, ::meta::Device device);
		static ::Dynamic isDevice_dyn();

		static bool isGamepad( ::flixel::input::actions::FlxActionInput input,int deviceID);
		static ::Dynamic isGamepad_dyn();

		 ::flixel::input::actions::FlxActionDigital _up;
		 ::flixel::input::actions::FlxActionDigital _left;
		 ::flixel::input::actions::FlxActionDigital _right;
		 ::flixel::input::actions::FlxActionDigital _down;
		 ::flixel::input::actions::FlxActionDigital _upP;
		 ::flixel::input::actions::FlxActionDigital _leftP;
		 ::flixel::input::actions::FlxActionDigital _rightP;
		 ::flixel::input::actions::FlxActionDigital _downP;
		 ::flixel::input::actions::FlxActionDigital _upR;
		 ::flixel::input::actions::FlxActionDigital _leftR;
		 ::flixel::input::actions::FlxActionDigital _rightR;
		 ::flixel::input::actions::FlxActionDigital _downR;
		 ::flixel::input::actions::FlxActionDigital _accept;
		 ::flixel::input::actions::FlxActionDigital _back;
		 ::flixel::input::actions::FlxActionDigital _pause;
		 ::flixel::input::actions::FlxActionDigital _reset;
		 ::flixel::input::actions::FlxActionDigital _cheat;
		 ::haxe::ds::StringMap byName;
		::Array< int > gamepadsAdded;
		 ::meta::KeyboardScheme keyboardScheme;
		bool get_UP();
		::Dynamic get_UP_dyn();

		bool get_LEFT();
		::Dynamic get_LEFT_dyn();

		bool get_RIGHT();
		::Dynamic get_RIGHT_dyn();

		bool get_DOWN();
		::Dynamic get_DOWN_dyn();

		bool get_UP_P();
		::Dynamic get_UP_P_dyn();

		bool get_LEFT_P();
		::Dynamic get_LEFT_P_dyn();

		bool get_RIGHT_P();
		::Dynamic get_RIGHT_P_dyn();

		bool get_DOWN_P();
		::Dynamic get_DOWN_P_dyn();

		bool get_UP_R();
		::Dynamic get_UP_R_dyn();

		bool get_LEFT_R();
		::Dynamic get_LEFT_R_dyn();

		bool get_RIGHT_R();
		::Dynamic get_RIGHT_R_dyn();

		bool get_DOWN_R();
		::Dynamic get_DOWN_R_dyn();

		bool get_ACCEPT();
		::Dynamic get_ACCEPT_dyn();

		bool get_BACK();
		::Dynamic get_BACK_dyn();

		bool get_PAUSE();
		::Dynamic get_PAUSE_dyn();

		bool get_RESET();
		::Dynamic get_RESET_dyn();

		bool get_CHEAT();
		::Dynamic get_CHEAT_dyn();

		void update();

		bool checkByName(::String name);
		::Dynamic checkByName_dyn();

		::String getDialogueName( ::flixel::input::actions::FlxActionDigital action);
		::Dynamic getDialogueName_dyn();

		::String getDialogueNameFromToken(::String token);
		::Dynamic getDialogueNameFromToken_dyn();

		 ::flixel::input::actions::FlxActionDigital getActionFromControl( ::meta::Control control);
		::Dynamic getActionFromControl_dyn();

		void forEachBound( ::meta::Control control, ::Dynamic func);
		::Dynamic forEachBound_dyn();

		void replaceBinding( ::meta::Control control, ::meta::Device device, ::Dynamic toAdd, ::Dynamic toRemove);
		::Dynamic replaceBinding_dyn();

		void copyFrom( ::meta::Controls controls, ::meta::Device device);
		::Dynamic copyFrom_dyn();

		void copyTo( ::meta::Controls controls, ::meta::Device device);
		::Dynamic copyTo_dyn();

		void mergeKeyboardScheme( ::meta::KeyboardScheme scheme);
		::Dynamic mergeKeyboardScheme_dyn();

		void bindKeys( ::meta::Control control,::Array< int > keys);
		::Dynamic bindKeys_dyn();

		void unbindKeys( ::meta::Control control,::Array< int > keys);
		::Dynamic unbindKeys_dyn();

		void setKeyboardScheme( ::meta::KeyboardScheme scheme,::hx::Null< bool >  reset);
		::Dynamic setKeyboardScheme_dyn();

		void removeKeyboard();
		::Dynamic removeKeyboard_dyn();

		void addGamepad(int id, ::haxe::ds::EnumValueMap buttonMap);
		::Dynamic addGamepad_dyn();

		void addGamepadLiteral(int id, ::haxe::ds::EnumValueMap buttonMap);
		::Dynamic addGamepadLiteral_dyn();

		void removeGamepad(::hx::Null< int >  deviceID);
		::Dynamic removeGamepad_dyn();

		void addDefaultGamepad(int id);
		::Dynamic addDefaultGamepad_dyn();

		void bindButtons( ::meta::Control control,int id,::Array< int > buttons);
		::Dynamic bindButtons_dyn();

		void unbindButtons( ::meta::Control control,int gamepadID,::Array< int > buttons);
		::Dynamic unbindButtons_dyn();

		::Array< int > getInputsFor( ::meta::Control control, ::meta::Device device,::Array< int > list);
		::Dynamic getInputsFor_dyn();

		void removeDevice( ::meta::Device device);
		::Dynamic removeDevice_dyn();

};

} // end namespace meta

#endif /* INCLUDED_meta_Controls */ 
