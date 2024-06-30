import React, { lazy, Suspense } from 'react';
import { Routes, Route, Outlet } from 'react-router-dom';

const AdminDashboard = lazy(() => import('../Components/Admin/AdminDashboard'));
const AdminSettings = lazy(() => import('../Components/Admin/AdminSettings'));

const AdminPage = () => {
  return (
    <div>
      <h1>Admin Page</h1>
      <Suspense fallback={<div>Loading...</div>}>
        <Routes>
          <Route path="dashboard" element={<AdminDashboard />} />
          <Route path="settings" element={<AdminSettings />} />
        </Routes>
        <Outlet />
      </Suspense>
    </div>
  );
};

export default AdminPage;
