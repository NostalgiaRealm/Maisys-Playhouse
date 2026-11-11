
/* ==== __break @ 00410764 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410764-00410764
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


