const express = require("express");
const app = express();
const PORT = 8080;

const cors = require("cors");
app.use(cors());

app.get("/api/info", (req, res) => {
  return res.json({
    name: "Jinsol",
    age: "24",
    description: "ssafy 교육생",
    message: "hi, jinsol^^ good afternoon.",
  });
});

app.listen(PORT, () => console.log(`this server is listening on ${PORT}`));
