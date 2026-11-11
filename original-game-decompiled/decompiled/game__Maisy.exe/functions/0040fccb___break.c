
/* ==== __break @ 0040fccb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fccb-0040fccb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


