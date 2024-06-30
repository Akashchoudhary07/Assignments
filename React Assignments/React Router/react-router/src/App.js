import React, { lazy, Suspense } from 'react';
import { BrowserRouter as Router, Routes, Route, Link } from 'react-router-dom';

const AdminPage = lazy(() => import('./Pages/AdminPage'));
const UserPage = lazy(() => import('./Pages/UserPage'));

function App() {
  return (
    <Router>
      <div>
        <nav>
          <ul>
            <li>
              <Link to="/admin">Admin</Link>
            </li>
            <li>
              <Link to="/user">User</Link>
            </li>
          </ul>
        </nav>
        <Suspense fallback={<div>Loading...</div>}>
          <Routes>
            <Route path="/admin/*" element={<AdminPage />} />
            <Route path="/user/*" element={<UserPage />} />
          </Routes>
        </Suspense>
      </div>
    </Router>
  );
}

export default App;
