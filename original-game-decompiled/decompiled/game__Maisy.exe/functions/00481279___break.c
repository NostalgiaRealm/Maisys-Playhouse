
/* ==== __break @ 00481279 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481279-00481279
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


