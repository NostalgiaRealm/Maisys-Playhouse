
/* ==== __break @ 00410e6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410e6f-00410e6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


