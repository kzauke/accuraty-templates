<%@ Control Language="vb" AutoEventWireup="false" Explicit="True" Inherits="DotNetNuke.UI.Skins.Skin" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.Web.Client.ClientResourceManagement" Assembly="DotNetNuke.Web.Client" %>
<%@ Register TagPrefix="dnn" TagName="BREADCRUMB" Src="~/Admin/Skins/BreadCrumb.ascx" %>
<%@ Register TagPrefix="dnn" TagName="COPYRIGHT" Src="~/Admin/Skins/Copyright.ascx" %>
<%@ Register TagPrefix="dnn" TagName="JQUERY" Src="~/Admin/Skins/jQuery.ascx" %>
<%@ Register TagPrefix="dnn" TagName="LANGUAGE" Src="~/Admin/Skins/Language.ascx" %>
<%@ Register TagPrefix="dnn" TagName="LINKTOMOBILE" Src="~/Admin/Skins/LinkToMobileSite.ascx" %>
<%@ Register TagPrefix="dnn" TagName="LOGIN" Src="~/Admin/Skins/Login.ascx" %>
<%@ Register TagPrefix="dnn" TagName="LOGO" Src="~/Admin/Skins/Logo.ascx" %>
<%@ Register TagPrefix="dnn" TagName="MENU" src="~/DesktopModules/DDRMenu/Menu.ascx" %>
<%@ Register TagPrefix="dnn" TagName="META" Src="~/Admin/Skins/Meta.ascx" %>
<%@ Register TagPrefix="dnn" TagName="PRIVACY" Src="~/Admin/Skins/Privacy.ascx" %>
<%@ Register TagPrefix="dnn" TagName="SEARCH" Src="~/Admin/Skins/Search.ascx" %>
<%@ Register TagPrefix="dnn" TagName="TERMS" Src="~/Admin/Skins/Terms.ascx" %>
<%@ Register TagPrefix="dnn" TagName="USER" Src="~/Admin/Skins/User.ascx" %>



<%-- add meta tags --%>
<dnn:META runat="server" Name="viewport" Content="width=device-width,initial-scale=1,shrink-to-fit=no" />


<%-- add stylesheets --%>
<dnn:DnnCssInclude runat="server" FilePath="assets/css/main.css" PathNameAlias="SkinPath" />


<%-- add scripts --%>
<dnn:JQUERY ID="dnnjQuery" runat="server" ForceProvider="DnnFormBottomProvider" Priority="100" />
<dnn:DnnJsInclude runat="server" FilePath="https://cdnjs.cloudflare.com/ajax/libs/tether/1.4.0/js/tether.min.js" ForceProvider="DnnFormBottomProvider" Priority="110" />
<dnn:DnnJsInclude runat="server" FilePath="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0-alpha.6/js/bootstrap.min.js" ForceProvider="DnnFormBottomProvider" Priority="120" />
<dnn:DnnJsInclude runat="server" FilePath="assets/js/scripts.js" PathNameAlias="SkinPath" ForceProvider="DnnFormBottomProvider" Priority="130" />
