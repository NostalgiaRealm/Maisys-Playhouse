
/* ==== __break @ 0044e5ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e5ad-0044e5ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


