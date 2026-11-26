# Leaky Bucket Algorithm – Rate Limiting

## 📌 Overview

This project implements the **Leaky Bucket Algorithm** using C++.

The Leaky Bucket Algorithm is a traffic-shaping and rate-limiting technique used in computer networks and system design to control the rate of incoming requests.

It works like a bucket with a small hole at the bottom:
- Incoming requests are added to a bucket (queue).
- Requests are processed at a fixed rate.
- If the bucket becomes full, new incoming requests are rejected.
- This helps control sudden traffic spikes.

## ⚙️ How It Works

1. A request arrives at the system.
2. The system checks whether the bucket has available capacity.
3. If space is available, the request is accepted.
4. If the bucket is full, the request is rejected.
5. Requests are processed in FIFO (First In, First Out) order.
6. Processing happens at a fixed rate.

## 🛠️ Technologies Used

- **Language:** C++
- **Data Structure:** Queue (STL)
- **Concepts:** Rate Limiting, FIFO, Traffic Shaping


## 📊 Example Output

```text
Request 1 accepted
Request 2 accepted
Request 3 accepted
Request 4 accepted
Request 5 accepted
Request 6 rejected (Bucket Full)

Remaining requests: 1 2 3 4 5

Processing requests:
Request 1 processed
Request 2 processed

Remaining requests: 3 4 5

Request 7 accepted
Request 8 accepted

Remaining requests: 3 4 5 7 8
```

## ⏱️ Complexity Analysis

| Operation | Time Complexity |
|---|---|
| Add Request | O(1) |
| Process One Request | O(1) |
| Process K Requests | O(K) |
| Display Queue | O(N) |

**Space Complexity:** O(C)

Where:
- C = Bucket capacity.
- N = Number of requests currently in the bucket.

## 🎯 Key Learnings

- Understanding rate-limiting algorithms.
- Implementing FIFO queues using C++ STL.
- Managing incoming requests.
- Handling bucket overflow.
- Understanding traffic shaping in system design.

## 🔮 Future Improvements

- Implement real-time request processing using C++ `chrono`.
- Add multithreading for concurrent request handling.
- Simulate incoming traffic with timestamps.
- Compare Leaky Bucket with Token Bucket.
- Build a simple API rate limiter.

---

**Author:** Aryaveer

**Project:** System Design – Rate Limiting Algorithms

**Implementation:** C++