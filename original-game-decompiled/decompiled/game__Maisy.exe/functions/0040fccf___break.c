
/* ==== __break @ 0040fccf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fccf-0040fccf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


