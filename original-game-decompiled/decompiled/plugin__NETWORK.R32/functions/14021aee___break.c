
/* ==== __break @ 14021aee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aee-14021aee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


