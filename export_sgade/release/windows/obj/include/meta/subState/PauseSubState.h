// Generated by Haxe 4.1.5
#ifndef INCLUDED_meta_subState_PauseSubState
#define INCLUDED_meta_subState_PauseSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_meta_MusicBeatSubState
#include <meta/MusicBeatSubState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(meta,MusicBeatSubState)
HX_DECLARE_CLASS2(meta,subState,PauseSubState)

namespace meta{
namespace subState{


class HXCPP_CLASS_ATTRIBUTES PauseSubState_obj : public  ::meta::MusicBeatSubState_obj
{
	public:
		typedef  ::meta::MusicBeatSubState_obj super;
		typedef PauseSubState_obj OBJ_;
		PauseSubState_obj();

	public:
		enum { _hx_ClassId = 0x7f5d3ae1 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="meta.subState.PauseSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"meta.subState.PauseSubState"); }
		static ::hx::ObjectPtr< PauseSubState_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< PauseSubState_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PauseSubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PauseSubState",67,95,e5,08); }

		 ::flixel::group::FlxTypedGroup grpMenuShit;
		::Array< ::String > menuItems;
		int curSelected;
		 ::flixel::_hx_system::FlxSound pauseMusic;
		void update(Float elapsed);

		void destroy();

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

};

} // end namespace meta
} // end namespace subState

#endif /* INCLUDED_meta_subState_PauseSubState */ 
