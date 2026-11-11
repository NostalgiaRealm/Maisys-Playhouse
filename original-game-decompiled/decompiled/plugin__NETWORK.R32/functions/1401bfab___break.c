
/* ==== __break @ 1401bfab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfab-1401bfab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


