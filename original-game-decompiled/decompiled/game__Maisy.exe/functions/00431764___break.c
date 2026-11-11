
/* ==== __break @ 00431764 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00431764-00431764
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


