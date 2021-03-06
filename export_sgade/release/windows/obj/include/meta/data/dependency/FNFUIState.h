// Generated by Haxe 4.1.5
#ifndef INCLUDED_meta_data_dependency_FNFUIState
#define INCLUDED_meta_data_dependency_FNFUIState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(meta,data,dependency,FNFUIState)

namespace meta{
namespace data{
namespace dependency{


class HXCPP_CLASS_ATTRIBUTES FNFUIState_obj : public  ::flixel::addons::ui::FlxUIState_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIState_obj super;
		typedef FNFUIState_obj OBJ_;
		FNFUIState_obj();

	public:
		enum { _hx_ClassId = 0x0225b2d9 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="meta.data.dependency.FNFUIState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"meta.data.dependency.FNFUIState"); }
		static ::hx::ObjectPtr< FNFUIState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< FNFUIState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FNFUIState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FNFUIState",df,a4,9c,93); }

		void transitionIn();

		void transitionOut( ::Dynamic OnExit);

};

} // end namespace meta
} // end namespace data
} // end namespace dependency

#endif /* INCLUDED_meta_data_dependency_FNFUIState */ 
