import React, { ReactElement, Fragment, useState } from "react";

interface Props {}
function Home({}: Props): ReactElement {
  const [login, setlogin] = useState(false);
  return (
    <Fragment>
      <div className="welcomdiv">
        <h1 id="weltxt">Welocme to your Todo List</h1>
        <h3 id="strtxt">Let's Start By Making a Account</h3>
      </div>
      {login ? (
        <form className="form-signin">
          <input
            type="email"
            id="inputEmail"
            className="form-control"
            placeholder="Email address"
            required
          />
          <input
            type="password"
            id="inputPassword"
            className="form-control"
            placeholder="Password"
            required
          />
          <button className="btn btn-lg btn-primary btn-block" type="submit">
            Sign in
          </button>
        </form>
      ) : (
        <form className="form-signup">
          <input
            type="text"
            name="username"
            className="form-control"
            placeholder="Username"
            required
          />
          <input
            type="email"
            name="email"
            className="form-control"
            placeholder="Email address"
            required
          />
          <input
            type="password"
            name="password"
            className="form-control"
            placeholder="Password"
            required
          />
          <input
            type="password"
            name="password2"
            className="form-control"
            placeholder="Confirm Password"
            required
          />
          <button className="btn btn-lg btn-primary btn-block" type="submit">
            Sign Up
          </button>
        </form>
      )}
      <p id="logintxt">
        Alrady have an Account , Want to{" "}
        <a href="" onClick={() => setlogin(true)}>
          Login
        </a>
      </p>
    </Fragment>
  );
}
export default Home;
