{
  "testCases": [
    {
      "input": [0, 1, 2, 0, 1, 2],
      "expectedOutput": [0, 0, 1, 1, 2, 2]
    },
    {
      "input": [2, 0, 2, 1, 1, 0],
      "expectedOutput": [0, 0, 1, 1, 2, 2]
    },
    {
      "input": [0, 0, 0, 0, 0, 0],
      "expectedOutput": [0, 0, 0, 0, 0, 0]
    },
    {
      "input": [1, 1, 1, 1, 1, 1],
      "expectedOutput": [1, 1, 1, 1, 1, 1]
    },
    {
      "input": [2, 2, 2, 2, 2, 2],
      "expectedOutput": [2, 2, 2, 2, 2, 2]
    },
    {
      "input": [0, 1, 2],
      "expectedOutput": [0, 1, 2]
    },
    {
      "input": [2, 1, 0],
      "expectedOutput": [0, 1, 2]
    },
    {
      "input": [],
      "expectedOutput": []
    },
    {
      "input": [0, 2, 1, 0, 1, 2, 0, 2, 1],
      "expectedOutput": [0, 0, 0, 1, 1, 1, 2, 2, 2]
    },
    {
      "input": [1, 0, 2, 0, 1, 2, 0, 2, 1, 0],
      "expectedOutput": [0, 0, 0, 0, 1, 1, 1, 2, 2, 2]
    }
  ]
}