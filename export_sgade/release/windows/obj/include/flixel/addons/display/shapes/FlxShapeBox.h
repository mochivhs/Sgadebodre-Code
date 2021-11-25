// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeBox
#define INCLUDED_flixel_addons_display_shapes_FlxShapeBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_display_shapes_FlxShape
#include <flixel/addons/display/shapes/FlxShape.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShape)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShapeBox)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace flixel{
namespace addons{
namespace display{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES FlxShapeBox_obj : public  ::flixel::addons::display::shapes::FlxShape_obj
{
	public:
		typedef  ::flixel::addons::display::shapes::FlxShape_obj super;
		typedef FlxShapeBox_obj OBJ_;
		FlxShapeBox_obj();

	public:
		enum { _hx_ClassId = 0x5cb61737 };

		void __construct(Float X,Float Y,Float W,Float H, ::Dynamic LineStyle_,int FillColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.shapes.FlxShapeBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.shapes.FlxShapeBox"); }
		static ::hx::ObjectPtr< FlxShapeBox_obj > __new(Float X,Float Y,Float W,Float H, ::Dynamic LineStyle_,int FillColor);
		static ::hx::ObjectPtr< FlxShapeBox_obj > __alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,Float W,Float H, ::Dynamic LineStyle_,int FillColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxShapeBox_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxShapeBox",dc,57,ec,35); }

		void update(Float elapsed);

		void drawSpecificShape( ::openfl::geom::Matrix matrix);

};

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes

#endif /* INCLUDED_flixel_addons_display_shapes_FlxShapeBox */ 