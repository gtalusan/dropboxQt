/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamMemberAddArg.h"

namespace dropboxQt{
namespace team{
    class MembersAddArg{
        /**
            field: new_members: Details of new members to be added to the team.
            field: force_async: Whether to force the add to happen
                asynchronously.
        */

    public:
        MembersAddArg():
        m_force_async(false)
        {};

        MembersAddArg(const std::list <MemberAddArg>&& arg):
        m_force_async(false)
        { m_new_members = arg; };

    public:
        ///Details of new members to be added to the team.
        const std::list <MemberAddArg>& newMembers()const{return m_new_members;};
        MembersAddArg& setNewmembers(const std::list <MemberAddArg>&& arg){m_new_members=arg; return *this;};

        ///Whether to force the add to happen asynchronously.
        bool forceAsync()const{return m_force_async;};
        MembersAddArg& setForceasync(const bool& arg){m_force_async=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersAddArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Details of new members to be added to the team.
        std::list <MemberAddArg> m_new_members;

        ///Whether to force the add to happen asynchronously.
        bool m_force_async;

    };//MembersAddArg

}//team
}//dropboxQt
