/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Common Primitives for Data Access Monitoring
 *
 * Author: SeongJae Park <sj@kernel.org>
 */

#include <linux/damon.h>

struct page *damon_get_page(unsigned long pfn);

void damon_ptep_mkold(pte_t *pte, struct mm_struct *mm, unsigned long addr);
void damon_pmdp_mkold(pmd_t *pmd, struct mm_struct *mm, unsigned long addr);

void damon_pa_mkold(unsigned long paddr);
bool damon_pa_young(unsigned long paddr, unsigned long *page_sz);

int damon_cold_score(struct damon_ctx *c, struct damon_region *r,
			struct damos *s);
int damon_hot_score(struct damon_ctx *c, struct damon_region *r,
			struct damos *s);
