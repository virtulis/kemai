#pragma once

#include "kimairequest.h"

namespace kemai::client {

class KimaiRequestFactory
{
public:
    static KimaiRequest version();
    static KimaiRequest me(); // me as user
    static KimaiRequest customers();
    static KimaiRequest customerAdd(const Customer& customer);
    static KimaiRequest projects();
    static KimaiRequest projects(int customerId);
    static KimaiRequest projectAdd(const Project& project);
    static KimaiRequest activities();
    static KimaiRequest activities(int projectId);
    static KimaiRequest activityAdd(const Activity& activity);
    static KimaiRequest activeTimeSheets();
    static KimaiRequest startTimeSheet(int projectId, int activityId, const QDateTime& beginAt, const QString& description, const QStringList& tags);
    static KimaiRequest stopTimeSheet(int timeSheetId);
    static KimaiRequest tags();
    static KimaiRequest tasks();
    static KimaiRequest taskLog(int taskId, const QDateTime& logBegin, const QDateTime& logEnd);
    static KimaiRequest taskStart(int taskId);
    static KimaiRequest taskStop(int taskId);
    static KimaiRequest taskClose(int taskId);
    static KimaiRequest plugins();
};

} // namespace kemai::client
