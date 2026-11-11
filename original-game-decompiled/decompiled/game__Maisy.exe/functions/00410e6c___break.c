
/* ==== __break @ 00410e6c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410e6c-00410e6c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


