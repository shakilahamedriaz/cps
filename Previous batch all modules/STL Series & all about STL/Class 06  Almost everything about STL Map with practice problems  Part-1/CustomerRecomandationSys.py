# Calculate similarity between two users
def calculate_distance(user1, user2):
    return sqrt(sum((user1[i] - user2[i])**2 for i in range(len(user1))))

# Get top K neighbors for a target user
def get_k_neighbors(target_user, user_data, K):
    distances = [(user, calculate_distance(target_user, user)) for user in user_data]
    return sorted(distances, key=lambda x: x[1])[:K]

# Recommend products based on neighbors
def recommend_products(target_user, user_data, K):
    neighbors = get_k_neighbors(target_user, user_data, K)
    recommendations = {product for neighbor, _ in neighbors for product in neighbor['liked_products'] 
                       if product not in target_user['liked_products']}
    return recommendations







