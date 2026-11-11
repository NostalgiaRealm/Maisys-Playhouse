
/* ==== __break @ 00470bcd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470bcd-00470bcd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


