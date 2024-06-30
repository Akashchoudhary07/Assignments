import React, { lazy, Suspense } from 'react';
import { Routes, Route, Outlet } from 'react-router-dom';

const UserDashboard = lazy(() => import('../Components/User/UserDashboard'));
const UserProfile = lazy(() => import('../Components/User/UserProfile'));

const UserPage = () => {
  return (
    <div>
      <h1>User Page</h1>
      <Suspense fallback={<div>Loading...</div>}>
        <Routes>
          <Route path="dashboard" element={<UserDashboard />} />
          <Route path="profile" element={<UserProfile />} />
        </Routes>
        <Outlet />
      </Suspense>
    </div>
  );
};

export default UserPage;
