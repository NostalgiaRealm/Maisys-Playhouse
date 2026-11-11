
/* ==== __break @ 0048b46e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048b46e-0048b46e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


