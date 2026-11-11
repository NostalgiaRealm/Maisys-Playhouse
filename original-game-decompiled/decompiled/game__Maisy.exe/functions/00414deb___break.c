
/* ==== __break @ 00414deb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00414deb-00414deb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


