// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_ForeverAssets
#include <ForeverAssets.h>
#endif
#ifndef INCLUDED_ForeverTools
#include <ForeverTools.h>
#endif
#ifndef INCLUDED_Init
#include <Init.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_gameObjects_userInterface_menu_Checkmark
#include <gameObjects/userInterface/menu/Checkmark.h>
#endif
#ifndef INCLUDED_gameObjects_userInterface_notes_Note
#include <gameObjects/userInterface/notes/Note.h>
#endif
#ifndef INCLUDED_gameObjects_userInterface_notes_NoteSplash
#include <gameObjects/userInterface/notes/NoteSplash.h>
#endif
#ifndef INCLUDED_gameObjects_userInterface_notes_UIStaticArrow
#include <gameObjects/userInterface/notes/UIStaticArrow.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_meta_MusicBeatState
#include <meta/MusicBeatState.h>
#endif
#ifndef INCLUDED_meta_data_Timings
#include <meta/data/Timings.h>
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
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_41c24e3f0d8e006d_27_generateCombo,"ForeverAssets","generateCombo",0x66d68bd5,"ForeverAssets.generateCombo","ForeverAssets.hx",27,0x75532e94)
HX_LOCAL_STACK_FRAME(_hx_pos_41c24e3f0d8e006d_75_generateRating,"ForeverAssets","generateRating",0x8947e6b6,"ForeverAssets.generateRating","ForeverAssets.hx",75,0x75532e94)
HX_LOCAL_STACK_FRAME(_hx_pos_41c24e3f0d8e006d_116_generateNoteSplashes,"ForeverAssets","generateNoteSplashes",0x8d8c8300,"ForeverAssets.generateNoteSplashes","ForeverAssets.hx",116,0x75532e94)
HX_LOCAL_STACK_FRAME(_hx_pos_41c24e3f0d8e006d_171_generateUIArrows,"ForeverAssets","generateUIArrows",0xeabedab7,"ForeverAssets.generateUIArrows","ForeverAssets.hx",171,0x75532e94)
HX_LOCAL_STACK_FRAME(_hx_pos_41c24e3f0d8e006d_252_generateArrow,"ForeverAssets","generateArrow",0x4208dd50,"ForeverAssets.generateArrow","ForeverAssets.hx",252,0x75532e94)
HX_LOCAL_STACK_FRAME(_hx_pos_41c24e3f0d8e006d_278_generateCheckmark,"ForeverAssets","generateCheckmark",0x64dc0fdc,"ForeverAssets.generateCheckmark","ForeverAssets.hx",278,0x75532e94)

void ForeverAssets_obj::__construct() { }

Dynamic ForeverAssets_obj::__CreateEmpty() { return new ForeverAssets_obj; }

void *ForeverAssets_obj::_hx_vtable = 0;

Dynamic ForeverAssets_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ForeverAssets_obj > _hx_result = new ForeverAssets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ForeverAssets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x517b17c6;
}

 ::flixel::FlxSprite ForeverAssets_obj::generateCombo(::String asset,::String number,bool allSicks,::String __o_assetModifier,::String __o_changeableSkin,::String baseLibrary,bool negative,int createdColor,int scoreInt){
            		::String assetModifier = __o_assetModifier;
            		if (::hx::IsNull(__o_assetModifier)) assetModifier = HX_("base",11,e8,10,41);
            		::String changeableSkin = __o_changeableSkin;
            		if (::hx::IsNull(__o_changeableSkin)) changeableSkin = HX_("default",c1,d8,c3,9b);
            	HX_GC_STACKFRAME(&_hx_pos_41c24e3f0d8e006d_27_generateCombo)
HXLINE(  28)		int width = 100;
HXLINE(  29)		int height = 140;
HXLINE(  31)		if ((assetModifier == HX_("pixel",86,c6,a3,c2))) {
HXLINE(  33)			width = 10;
HXLINE(  34)			height = 12;
            		}
HXLINE(  36)		 ::flixel::FlxSprite newSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  36)		::String library = null();
HXDLIN(  36)		 ::flixel::FlxSprite newSprite1 = newSprite->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + ::ForeverTools_obj::returnSkinAsset(asset,assetModifier,changeableSkin,baseLibrary,null(),null())) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,width,height,null(),null());
HXLINE(  38)		{
HXLINE(  41)			newSprite1->set_alpha(( (Float)(1) ));
HXLINE(  42)			newSprite1->screenCenter(null());
HXLINE(  43)			{
HXLINE(  43)				 ::flixel::FlxSprite _g = newSprite1;
HXDLIN(  43)				_g->set_x((_g->x + ((43 * scoreInt) + 20)));
            			}
HXLINE(  44)			{
HXLINE(  44)				 ::flixel::FlxSprite _g1 = newSprite1;
HXDLIN(  44)				_g1->set_y((_g1->y + 60));
            			}
HXLINE(  46)			newSprite1->set_color(-1);
HXLINE(  47)			if (negative) {
HXLINE(  48)				newSprite1->set_color(createdColor);
            			}
HXLINE(  50)			 ::flixel::animation::FlxAnimationController newSprite2 = newSprite1->animation;
HXLINE(  51)			int _hx_tmp;
HXDLIN(  51)			if (::hx::IsNotNull( ::Std_obj::parseInt(number) )) {
HXLINE(  51)				_hx_tmp = (::Std_obj::parseInt(number) + 1);
            			}
            			else {
HXLINE(  51)				_hx_tmp = 0;
            			}
HXDLIN(  51)			int _hx_tmp1;
HXDLIN(  51)			if (!(allSicks)) {
HXLINE(  51)				_hx_tmp1 = 0;
            			}
            			else {
HXLINE(  51)				_hx_tmp1 = 11;
            			}
HXLINE(  50)			newSprite2->add(HX_("base",11,e8,10,41),::Array_obj< int >::__new(1)->init(0,(_hx_tmp + _hx_tmp1)),0,false,null(),null());
HXLINE(  53)			newSprite1->animation->play(HX_("base",11,e8,10,41),null(),null(),null());
            		}
HXLINE(  56)		if ((assetModifier == HX_("pixel",86,c6,a3,c2))) {
HXLINE(  57)			Float _hx_tmp = newSprite1->get_width();
HXDLIN(  57)			newSprite1->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::meta::state::PlayState_obj::daPixelZoom)),null());
            		}
            		else {
HXLINE(  60)			newSprite1->set_antialiasing(true);
HXLINE(  61)			newSprite1->setGraphicSize(::Std_obj::_hx_int((newSprite1->get_width() * ((Float)0.5))),null());
            		}
HXLINE(  63)		newSprite1->updateHitbox();
HXLINE(  64)		if (!(( (bool)(::Init_obj::trueSettings->get(HX_("Simply Judgements",b8,b3,c4,d7))) ))) {
HXLINE(  66)			 ::flixel::math::FlxPoint newSprite = newSprite1->acceleration;
HXDLIN(  66)			newSprite->set_y(( (Float)(::flixel::FlxG_obj::random->_hx_int(200,300,null())) ));
HXLINE(  67)			 ::flixel::math::FlxPoint newSprite2 = newSprite1->velocity;
HXDLIN(  67)			newSprite2->set_y(( (Float)(-(::flixel::FlxG_obj::random->_hx_int(140,160,null()))) ));
HXLINE(  68)			 ::flixel::math::FlxPoint newSprite3 = newSprite1->velocity;
HXDLIN(  68)			newSprite3->set_x(::flixel::FlxG_obj::random->_hx_float(-5,5,null()));
            		}
HXLINE(  70)		return newSprite1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(ForeverAssets_obj,generateCombo,return )

 ::flixel::FlxSprite ForeverAssets_obj::generateRating(::String asset,bool perfectSick,::String timing,::String __o_assetModifier,::String __o_changeableSkin,::String baseLibrary){
            		::String assetModifier = __o_assetModifier;
            		if (::hx::IsNull(__o_assetModifier)) assetModifier = HX_("base",11,e8,10,41);
            		::String changeableSkin = __o_changeableSkin;
            		if (::hx::IsNull(__o_changeableSkin)) changeableSkin = HX_("default",c1,d8,c3,9b);
            	HX_GC_STACKFRAME(&_hx_pos_41c24e3f0d8e006d_75_generateRating)
HXLINE(  76)		int width = 500;
HXLINE(  77)		int height = 163;
HXLINE(  78)		if ((assetModifier == HX_("pixel",86,c6,a3,c2))) {
HXLINE(  80)			width = 72;
HXLINE(  81)			height = 32;
            		}
HXLINE(  83)		 ::flixel::FlxSprite rating =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  83)		::String library = null();
HXDLIN(  83)		 ::flixel::FlxSprite rating1 = rating->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + ::ForeverTools_obj::returnSkinAsset(HX_("judgements",1e,12,d1,81),assetModifier,changeableSkin,baseLibrary,null(),null())) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,width,height,null(),null());
HXLINE(  85)		{
HXLINE(  88)			rating1->set_alpha(( (Float)(1) ));
HXLINE(  89)			rating1->screenCenter(null());
HXLINE(  90)			rating1->set_x(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.55)) - ( (Float)(40) )));
HXLINE(  91)			{
HXLINE(  91)				 ::flixel::FlxSprite _g = rating1;
HXDLIN(  91)				_g->set_y((_g->y - ( (Float)(60) )));
            			}
HXLINE(  92)			if (!(( (bool)(::Init_obj::trueSettings->get(HX_("Simply Judgements",b8,b3,c4,d7))) ))) {
HXLINE(  94)				rating1->acceleration->set_y(( (Float)(550) ));
HXLINE(  95)				 ::flixel::math::FlxPoint rating = rating1->velocity;
HXDLIN(  95)				rating->set_y(( (Float)(-(::flixel::FlxG_obj::random->_hx_int(140,175,null()))) ));
HXLINE(  96)				 ::flixel::math::FlxPoint rating2 = rating1->velocity;
HXDLIN(  96)				rating2->set_x(( (Float)(-(::flixel::FlxG_obj::random->_hx_int(0,10,null()))) ));
            			}
HXLINE(  98)			 ::flixel::animation::FlxAnimationController rating2 = rating1->animation;
HXLINE(  99)			Float _hx_tmp = (( (Float)(::meta::data::Timings_obj::judgementsMap->get(asset)->__GetItem(0)) ) * ( (Float)(2) ));
HXDLIN(  99)			int _hx_tmp1;
HXDLIN(  99)			if (perfectSick) {
HXLINE(  99)				_hx_tmp1 = 0;
            			}
            			else {
HXLINE(  99)				_hx_tmp1 = 2;
            			}
HXDLIN(  99)			int _hx_tmp2;
HXDLIN(  99)			if ((timing == HX_("late",26,0b,ad,47))) {
HXLINE(  99)				_hx_tmp2 = 1;
            			}
            			else {
HXLINE(  99)				_hx_tmp2 = 0;
            			}
HXLINE(  98)			rating2->add(HX_("base",11,e8,10,41),::Array_obj< int >::__new(1)->init(0,::Std_obj::_hx_int(((_hx_tmp + _hx_tmp1) + _hx_tmp2))),24,false,null(),null());
HXLINE( 101)			rating1->animation->play(HX_("base",11,e8,10,41),null(),null(),null());
            		}
HXLINE( 104)		if ((assetModifier == HX_("pixel",86,c6,a3,c2))) {
HXLINE( 105)			Float _hx_tmp = rating1->get_width();
HXDLIN( 105)			rating1->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp * ::meta::state::PlayState_obj::daPixelZoom) * ((Float)0.7))),null());
            		}
            		else {
HXLINE( 108)			rating1->set_antialiasing(true);
HXLINE( 109)			rating1->setGraphicSize(::Std_obj::_hx_int((rating1->get_width() * ((Float)0.7))),null());
            		}
HXLINE( 112)		return rating1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ForeverAssets_obj,generateRating,return )

 ::gameObjects::userInterface::notes::NoteSplash ForeverAssets_obj::generateNoteSplashes(::String asset,::String __o_assetModifier,::String baseLibrary,int noteData){
            		::String assetModifier = __o_assetModifier;
            		if (::hx::IsNull(__o_assetModifier)) assetModifier = HX_("base",11,e8,10,41);
            	HX_GC_STACKFRAME(&_hx_pos_41c24e3f0d8e006d_116_generateNoteSplashes)
HXLINE( 118)		 ::gameObjects::userInterface::notes::NoteSplash tempSplash =  ::gameObjects::userInterface::notes::NoteSplash_obj::__alloc( HX_CTX ,noteData);
HXLINE( 119)		if ((assetModifier == HX_("pixel",86,c6,a3,c2))) {
HXLINE( 122)			::String library = null();
HXDLIN( 122)			Dynamic( tempSplash->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + ::ForeverTools_obj::returnSkinAsset(HX_("splash-pixel",e0,0b,45,4e),assetModifier,( (::String)(::Init_obj::trueSettings->get(HX_("Note Skin",6b,8d,33,f0))) ),HX_("noteskins/notes",d6,76,75,6d),null(),null())) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,34,34,null(),null())).StaticCast<  ::meta::data::dependency::FNFSprite >();
HXLINE( 125)			tempSplash->animation->add(HX_("anim1",00,c9,e3,22),::Array_obj< int >::__new(4)->init(0,noteData)->init(1,(4 + noteData))->init(2,(8 + noteData))->init(3,(12 + noteData)),24,false,null(),null());
HXLINE( 126)			tempSplash->animation->add(HX_("anim2",01,c9,e3,22),::Array_obj< int >::__new(4)->init(0,(16 + noteData))->init(1,(20 + noteData))->init(2,(24 + noteData))->init(3,(28 + noteData)),24,false,null(),null());
HXLINE( 127)			tempSplash->animation->play(HX_("anim1",00,c9,e3,22),null(),null(),null());
HXLINE( 128)			tempSplash->addOffset(HX_("anim1",00,c9,e3,22),-120,-90);
HXLINE( 129)			tempSplash->addOffset(HX_("anim2",01,c9,e3,22),-120,-90);
HXLINE( 130)			Float _hx_tmp = tempSplash->get_width();
HXDLIN( 130)			tempSplash->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::meta::state::PlayState_obj::daPixelZoom)),null());
            		}
            		else {
HXLINE( 134)			::String library = null();
HXDLIN( 134)			Dynamic( tempSplash->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + ::ForeverTools_obj::returnSkinAsset(HX_("noteSplashes",a7,57,29,8d),assetModifier,( (::String)(::Init_obj::trueSettings->get(HX_("Note Skin",6b,8d,33,f0))) ),HX_("noteskins/notes",d6,76,75,6d),null(),null())) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,210,210,null(),null())).StaticCast<  ::meta::data::dependency::FNFSprite >();
HXLINE( 137)			tempSplash->animation->add(HX_("anim1",00,c9,e3,22),::Array_obj< int >::__new(5)->init(0,((noteData * 2) + 1))->init(1,(8 + ((noteData * 2) + 1)))->init(2,(16 + ((noteData * 2) + 1)))->init(3,(24 + ((noteData * 2) + 1)))->init(4,(32 + ((noteData * 2) + 1))),24,false,null(),null());
HXLINE( 144)			tempSplash->animation->add(HX_("anim2",01,c9,e3,22),::Array_obj< int >::__new(5)->init(0,(noteData * 2))->init(1,(8 + (noteData * 2)))->init(2,(16 + (noteData * 2)))->init(3,(24 + (noteData * 2)))->init(4,(32 + (noteData * 2))),24,false,null(),null());
HXLINE( 151)			tempSplash->animation->play(HX_("anim1",00,c9,e3,22),null(),null(),null());
HXLINE( 152)			tempSplash->addOffset(HX_("anim1",00,c9,e3,22),-20,-10);
HXLINE( 153)			tempSplash->addOffset(HX_("anim2",01,c9,e3,22),-20,-10);
            		}
HXLINE( 167)		return tempSplash;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ForeverAssets_obj,generateNoteSplashes,return )

 ::gameObjects::userInterface::notes::UIStaticArrow ForeverAssets_obj::generateUIArrows(Float x,Float y, ::Dynamic __o_staticArrowType,::String assetModifier){
            		 ::Dynamic staticArrowType = __o_staticArrowType;
            		if (::hx::IsNull(__o_staticArrowType)) staticArrowType = 0;
            	HX_GC_STACKFRAME(&_hx_pos_41c24e3f0d8e006d_171_generateUIArrows)
HXLINE( 172)		 ::gameObjects::userInterface::notes::UIStaticArrow newStaticArrow =  ::gameObjects::userInterface::notes::UIStaticArrow_obj::__alloc( HX_CTX ,x,y,staticArrowType);
HXLINE( 173)		::String _hx_switch_0 = assetModifier;
            		if (  (_hx_switch_0==HX_("chart editor",af,f4,82,ec)) ){
HXLINE( 196)			::String library = null();
HXDLIN( 196)			newStaticArrow->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("UI/forever/base/chart editor/note_array",31,58,31,0b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,157,156,null(),null());
HXLINE( 197)			newStaticArrow->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::__new(1)->init(0,staticArrowType),null(),null(),null(),null());
HXLINE( 198)			newStaticArrow->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::__new(1)->init(0,(16 + staticArrowType)),12,false,null(),null());
HXLINE( 199)			newStaticArrow->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::__new(3)->init(0,(4 + staticArrowType))->init(1,(8 + staticArrowType))->init(2,(16 + staticArrowType)),24,false,null(),null());
HXLINE( 201)			newStaticArrow->addOffset(HX_("static",ae,dc,fb,05),null(),null());
HXLINE( 202)			newStaticArrow->addOffset(HX_("pressed",a2,d2,e6,39),null(),null());
HXLINE( 203)			newStaticArrow->addOffset(HX_("confirm",00,9d,39,10),null(),null());
HXLINE( 195)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("pixel",86,c6,a3,c2)) ){
HXLINE( 179)			::String framesArgument = HX_("arrows-pixels",d0,fd,54,14);
HXLINE( 180)			::String library = null();
HXDLIN( 180)			newStaticArrow->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + ::ForeverTools_obj::returnSkinAsset((HX_("",00,00,00,00) + framesArgument),assetModifier,( (::String)(::Init_obj::trueSettings->get(HX_("Note Skin",6b,8d,33,f0))) ),HX_("noteskins/notes",d6,76,75,6d),null(),null())) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,17,17,null(),null());
HXLINE( 183)			newStaticArrow->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::__new(1)->init(0,staticArrowType),null(),null(),null(),null());
HXLINE( 184)			newStaticArrow->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::__new(2)->init(0,(4 + staticArrowType))->init(1,(8 + staticArrowType)),12,false,null(),null());
HXLINE( 185)			newStaticArrow->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::__new(2)->init(0,(12 + staticArrowType))->init(1,(16 + staticArrowType)),24,false,null(),null());
HXLINE( 187)			Float _hx_tmp = newStaticArrow->get_width();
HXDLIN( 187)			newStaticArrow->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::meta::state::PlayState_obj::daPixelZoom)),null());
HXLINE( 188)			newStaticArrow->updateHitbox();
HXLINE( 189)			newStaticArrow->set_antialiasing(false);
HXLINE( 191)			newStaticArrow->addOffset(HX_("static",ae,dc,fb,05),-67,-50);
HXLINE( 192)			newStaticArrow->addOffset(HX_("pressed",a2,d2,e6,39),-67,-50);
HXLINE( 193)			newStaticArrow->addOffset(HX_("confirm",00,9d,39,10),-67,-50);
HXLINE( 175)			goto _hx_goto_3;
            		}
            		/* default */{
HXLINE( 207)			::String stringSect = HX_("",00,00,00,00);
HXLINE( 209)			stringSect = ::gameObjects::userInterface::notes::UIStaticArrow_obj::getArrowFromNumber(( (int)(staticArrowType) ));
HXLINE( 211)			::String framesArgument = HX_("NOTE_assets",70,3c,09,f7);
HXLINE( 213)			::String key = ::ForeverTools_obj::returnSkinAsset((HX_("",00,00,00,00) + framesArgument),assetModifier,( (::String)(::Init_obj::trueSettings->get(HX_("Note Skin",6b,8d,33,f0))) ),HX_("noteskins/notes",d6,76,75,6d),null(),null());
HXDLIN( 213)			::String library = null();
HXDLIN( 213)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 213)			newStaticArrow->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::sys::io::File_obj::getContent(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library))));
HXLINE( 216)			 ::flixel::animation::FlxAnimationController newStaticArrow1 = newStaticArrow->animation;
HXDLIN( 216)			newStaticArrow1->addByPrefix(HX_("static",ae,dc,fb,05),(HX_("arrow",c9,79,8f,25) + stringSect.toUpperCase()),null(),null(),null(),null());
HXLINE( 217)			newStaticArrow->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),(stringSect + HX_(" press",63,df,f3,93)),24,false,null(),null());
HXLINE( 218)			newStaticArrow->animation->addByPrefix(HX_("confirm",00,9d,39,10),(stringSect + HX_(" confirm",e0,e0,87,36)),24,false,null(),null());
HXLINE( 220)			newStaticArrow->set_antialiasing(true);
HXLINE( 221)			newStaticArrow->setGraphicSize(::Std_obj::_hx_int((newStaticArrow->get_width() * ((Float)0.7))),null());
HXLINE( 227)			int offsetMiddleX = 0;
HXLINE( 228)			int offsetMiddleY = 0;
HXLINE( 229)			bool _hx_tmp1;
HXDLIN( 229)			if (::hx::IsGreater( staticArrowType,0 )) {
HXLINE( 229)				_hx_tmp1 = ::hx::IsLess( staticArrowType,3 );
            			}
            			else {
HXLINE( 229)				_hx_tmp1 = false;
            			}
HXDLIN( 229)			if (_hx_tmp1) {
HXLINE( 231)				offsetMiddleX = 2;
HXLINE( 232)				offsetMiddleY = 2;
HXLINE( 233)				if (::hx::IsEq( staticArrowType,1 )) {
HXLINE( 235)					offsetMiddleX = (offsetMiddleX - 1);
HXLINE( 236)					offsetMiddleY = (offsetMiddleY + 2);
            				}
            			}
HXLINE( 240)			newStaticArrow->addOffset(HX_("static",ae,dc,fb,05),null(),null());
HXLINE( 241)			newStaticArrow->addOffset(HX_("pressed",a2,d2,e6,39),-2,-2);
HXLINE( 242)			newStaticArrow->addOffset(HX_("confirm",00,9d,39,10),(36 + offsetMiddleX),(36 + offsetMiddleY));
            		}
            		_hx_goto_3:;
HXLINE( 245)		return newStaticArrow;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ForeverAssets_obj,generateUIArrows,return )

 ::gameObjects::userInterface::notes::Note ForeverAssets_obj::generateArrow(::String assetModifier,Float strumTime,int noteData,int noteType,Float noteAlt, ::Dynamic __o_isSustainNote, ::gameObjects::userInterface::notes::Note prevNote){
            		 ::Dynamic isSustainNote = __o_isSustainNote;
            		if (::hx::IsNull(__o_isSustainNote)) isSustainNote = false;
            	HX_STACKFRAME(&_hx_pos_41c24e3f0d8e006d_252_generateArrow)
HXLINE( 253)		 ::gameObjects::userInterface::notes::Note newNote;
HXLINE( 254)		::String changeableSkin = ::Init_obj::trueSettings->get_string(HX_("Note Skin",6b,8d,33,f0));
HXLINE( 256)		if (::StringTools_obj::startsWith(changeableSkin,HX_("quant",83,7e,e7,5d))) {
HXLINE( 257)			newNote = ::gameObjects::userInterface::notes::Note_obj::returnQuantNote(assetModifier,strumTime,noteData,noteType,noteAlt,isSustainNote,prevNote);
            		}
            		else {
HXLINE( 259)			newNote = ::gameObjects::userInterface::notes::Note_obj::returnDefaultNote(assetModifier,strumTime,noteData,noteType,noteAlt,isSustainNote,prevNote);
            		}
HXLINE( 262)		bool _hx_tmp;
HXDLIN( 262)		if (( (bool)(isSustainNote) )) {
HXLINE( 262)			_hx_tmp = ::hx::IsNotNull( prevNote );
            		}
            		else {
HXLINE( 262)			_hx_tmp = false;
            		}
HXDLIN( 262)		if (_hx_tmp) {
HXLINE( 264)			if (prevNote->isSustainNote) {
HXLINE( 265)				newNote->noteVisualOffset = prevNote->noteVisualOffset;
            			}
            			else {
HXLINE( 267)				Float _hx_tmp = (prevNote->get_width() / ( (Float)(2) ));
HXDLIN( 267)				newNote->noteVisualOffset = (_hx_tmp - (newNote->get_width() / ( (Float)(2) )));
            			}
            		}
HXLINE( 270)		return newNote;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ForeverAssets_obj,generateArrow,return )

 ::gameObjects::userInterface::menu::Checkmark ForeverAssets_obj::generateCheckmark(Float x,Float y,::String asset,::String __o_assetModifier,::String __o_changeableSkin,::String baseLibrary){
            		::String assetModifier = __o_assetModifier;
            		if (::hx::IsNull(__o_assetModifier)) assetModifier = HX_("base",11,e8,10,41);
            		::String changeableSkin = __o_changeableSkin;
            		if (::hx::IsNull(__o_changeableSkin)) changeableSkin = HX_("default",c1,d8,c3,9b);
            	HX_GC_STACKFRAME(&_hx_pos_41c24e3f0d8e006d_278_generateCheckmark)
HXLINE( 279)		 ::gameObjects::userInterface::menu::Checkmark newCheckmark =  ::gameObjects::userInterface::menu::Checkmark_obj::__alloc( HX_CTX ,x,y);
HXLINE( 280)		{
HXLINE( 283)			::String key = ::ForeverTools_obj::returnSkinAsset(asset,assetModifier,changeableSkin,baseLibrary,null(),null());
HXDLIN( 283)			::String library = null();
HXDLIN( 283)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 283)			newCheckmark->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::sys::io::File_obj::getContent(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library))));
HXLINE( 284)			newCheckmark->set_antialiasing(true);
HXLINE( 286)			newCheckmark->animation->addByPrefix(HX_("false finished",8f,31,48,70),HX_("uncheckFinished",61,c6,e2,3a),null(),null(),null(),null());
HXLINE( 287)			newCheckmark->animation->addByPrefix(HX_("false",a3,35,4f,fb),HX_("uncheck",cf,8f,47,42),12,false,null(),null());
HXLINE( 288)			newCheckmark->animation->addByPrefix(HX_("true finished",84,b2,bb,98),HX_("checkFinished",5a,f0,68,7d),null(),null(),null(),null());
HXLINE( 289)			newCheckmark->animation->addByPrefix(HX_("true",4e,a7,03,4d),HX_("check",c8,98,b6,45),12,false,null(),null());
HXLINE( 296)			newCheckmark->setGraphicSize(::Std_obj::_hx_int((newCheckmark->get_width() * ((Float)0.7))),null());
HXLINE( 297)			newCheckmark->updateHitbox();
HXLINE( 300)			int offsetByX = 45;
HXLINE( 301)			int offsetByY = 5;
HXLINE( 302)			newCheckmark->addOffset(HX_("false",a3,35,4f,fb),offsetByX,offsetByY);
HXLINE( 303)			newCheckmark->addOffset(HX_("true",4e,a7,03,4d),offsetByX,offsetByY);
HXLINE( 304)			newCheckmark->addOffset(HX_("true finished",84,b2,bb,98),offsetByX,offsetByY);
HXLINE( 305)			newCheckmark->addOffset(HX_("false finished",8f,31,48,70),offsetByX,offsetByY);
            		}
HXLINE( 312)		return newCheckmark;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ForeverAssets_obj,generateCheckmark,return )


ForeverAssets_obj::ForeverAssets_obj()
{
}

bool ForeverAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"generateCombo") ) { outValue = generateCombo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"generateArrow") ) { outValue = generateArrow_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"generateRating") ) { outValue = generateRating_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"generateUIArrows") ) { outValue = generateUIArrows_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generateCheckmark") ) { outValue = generateCheckmark_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"generateNoteSplashes") ) { outValue = generateNoteSplashes_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ForeverAssets_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ForeverAssets_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ForeverAssets_obj::__mClass;

static ::String ForeverAssets_obj_sStaticFields[] = {
	HX_("generateCombo",d9,f8,d9,f0),
	HX_("generateRating",32,dd,43,c2),
	HX_("generateNoteSplashes",7c,7e,4a,f9),
	HX_("generateUIArrows",33,68,82,53),
	HX_("generateArrow",54,4a,0c,cc),
	HX_("generateCheckmark",e0,4e,34,a7),
	::String(null())
};

void ForeverAssets_obj::__register()
{
	ForeverAssets_obj _hx_dummy;
	ForeverAssets_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ForeverAssets",6a,f2,63,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ForeverAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ForeverAssets_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ForeverAssets_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ForeverAssets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ForeverAssets_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

