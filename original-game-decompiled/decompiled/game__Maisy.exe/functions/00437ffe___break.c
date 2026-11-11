
/* ==== __break @ 00437ffe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00437ffe-00437ffe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


