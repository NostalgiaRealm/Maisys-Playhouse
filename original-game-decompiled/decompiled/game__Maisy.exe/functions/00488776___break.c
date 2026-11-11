
/* ==== __break @ 00488776 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00488776-00488776
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


