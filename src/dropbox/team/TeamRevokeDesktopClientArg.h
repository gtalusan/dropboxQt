/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamDeviceSessionArg.h"

namespace dropboxQt{
namespace team{
    class RevokeDesktopClientArg : public DeviceSessionArg{
        /**
            field: delete_on_unlink: Whether to delete all files of the account
                (this is possible only if supported by the desktop client and
                will be made the next time the client access the account)
        */

    public:
        RevokeDesktopClientArg():
        m_delete_on_unlink(false)
        {};

        RevokeDesktopClientArg(const bool& arg):
        m_delete_on_unlink(false)
        { m_delete_on_unlink = arg; };

    public:
        ///Whether to delete all files of the account (this is possible only if supported by the desktop client and  will be made the next time the client access the account)
        bool deleteOnUnlink()const{return m_delete_on_unlink;};
        RevokeDesktopClientArg& setDeleteonunlink(const bool& arg){m_delete_on_unlink=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeDesktopClientArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Whether to delete all files of the account (this is possible only if supported by the desktop client and  will be made the next time the client access the account)
        bool m_delete_on_unlink;

    };//RevokeDesktopClientArg

}//team
}//dropboxQt
