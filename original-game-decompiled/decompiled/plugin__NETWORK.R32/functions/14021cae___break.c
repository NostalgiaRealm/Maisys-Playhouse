
/* ==== __break @ 14021cae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021cae-14021cae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


