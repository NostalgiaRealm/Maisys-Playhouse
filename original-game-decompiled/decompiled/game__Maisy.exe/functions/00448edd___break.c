
/* ==== __break @ 00448edd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448edd-00448edd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


