/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : uti-tools
 #	author : miyako
 #	2015/08/11
 #
 # --------------------------------------------------------------------------------*/

#import <CoreServices/CoreServices.h>
#include <QuickLook/QuickLook.h>

// --- Path
void PATH_GET_COMPONENTS(sLONG_PTR *pResult, PackagePtr pParams);
void PATH_Get_name(sLONG_PTR *pResult, PackagePtr pParams);
void PATH_Get_directory_path(sLONG_PTR *pResult, PackagePtr pParams);
void PATH_Get_uti(sLONG_PTR *pResult, PackagePtr pParams);
void PATH_OPEN_WITH_APPLICATION(sLONG_PTR *pResult, PackagePtr pParams);
void PATH_Get_thumbnail(sLONG_PTR *pResult, PackagePtr pParams);

// --- Conversion
void UTI_To_ostype(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_To_mime(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_To_extension(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_From_ostype(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_From_mime(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_From_extension(sLONG_PTR *pResult, PackagePtr pParams);

// --- Comparision
void UTI_Equal(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_Conforms_to(sLONG_PTR *pResult, PackagePtr pParams);

// --- Information
void UTI_Get_declaration(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_Get_localized_description(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_Get_icon(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_Get_application(sLONG_PTR *pResult, PackagePtr pParams);
void UTI_Get_description(sLONG_PTR *pResult, PackagePtr pParams);

#define DEFAULT_ICON_SIZE 1024