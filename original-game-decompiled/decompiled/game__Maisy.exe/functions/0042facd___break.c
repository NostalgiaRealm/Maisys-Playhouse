
/* ==== __break @ 0042facd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042facd-0042facd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


