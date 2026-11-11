
/* ==== __break @ 00410e6d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410e6d-00410e6d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


